using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

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

        {
            if (vp.time > 8.4f && vp.time < 9)
            {
                vp.time = 4.2;
                vp.Play();
            }

        }
    }
}
