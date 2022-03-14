using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class VideoManager : MonoBehaviour
{
    [SerializeField]
    private string url;

    private VideoPlayer vp;
    // Start is called before the first frame update
    void Start()
    {
        vp = this.GetComponent<VideoPlayer>();
        vp.url = System.IO.Path.Combine(Application.streamingAssetsPath, "pma instructions.mp4");
        vp.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (vp.isPlaying && (ulong)vp.frame == vp.frameCount - 1)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }

    public void skipTutorial()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
