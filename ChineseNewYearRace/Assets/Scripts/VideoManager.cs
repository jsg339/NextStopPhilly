using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;
public class VideoManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        VideoPlayer vp = this.GetComponent<VideoPlayer>();
        if(SceneManager.GetActiveScene().buildIndex == 1)
        {
            if (vp.isPlaying && (ulong)vp.frame == vp.frameCount - 1)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
        }
        else if (SceneManager.GetActiveScene().buildIndex <= 2)
        {
            if (vp.time > 8.4f && vp.time < 9)
            {
                vp.time = 4.2;
                vp.Play();
            }
        }
        else 
        {
            if (vp.time > 4f && vp.time < 5)
            {
                vp.time = 3;
                vp.Play();
            }
        }
    }
}
