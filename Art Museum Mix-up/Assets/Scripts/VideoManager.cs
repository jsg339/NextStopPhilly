using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class VideoManager : MonoBehaviour
{
    [SerializeField]
    private string url;
    [SerializeField]
    private bool isEnd;

    private VideoPlayer vp;
    // Start is called before the first frame update
    void Start()
    {
        vp = this.GetComponent<VideoPlayer>();
        vp.url = System.IO.Path.Combine(Application.streamingAssetsPath, url);
        vp.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if(SceneManager.GetActiveScene().buildIndex == 2)
        {
            StartCoroutine(StartUp());
        }
        else if (SceneManager.GetActiveScene().buildIndex != 0)
        {
            if (vp.isPlaying && (ulong)vp.frame == vp.frameCount - 1 && !isEnd)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
        }
    }

    private IEnumerator StartUp()
    {
        Time.timeScale = 0.000001f;
        yield return new WaitForSeconds(0.000009f);
        this.gameObject.SetActive(false);
        Time.timeScale = 1;
    }

    public void skipTutorial()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void back()
    {
        vp.Stop();
        vp.frame = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }    
}
