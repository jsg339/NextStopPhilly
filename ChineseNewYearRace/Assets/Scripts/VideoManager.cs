using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;
public class VideoManager : MonoBehaviour
{
    private bool isDisabled = false;

    // Start is called before the first frame update
    void Start()
    {
        isDisabled = true;
        StartCoroutine(Cooldown());
    }

    // Update is called once per frame
    void Update()
    {
        VideoPlayer vp = this.GetComponent<VideoPlayer>();
        if((Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.S)) && !isDisabled)
        {
            if(SceneManager.GetActiveScene().buildIndex >= 3)
            {
                SceneManager.LoadScene(1);
            }
            else
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
            
        }
        if(SceneManager.GetActiveScene().buildIndex == 1)
        {
            if (Input.GetKeyDown(KeyCode.S) && !isDisabled)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
            }
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
            if (vp.time > 8f && vp.time < 9)
            {
                vp.time = 7;
                vp.Play();
            }
        }
    }
    IEnumerator Cooldown()
    {
        yield return new WaitForSeconds(1);
        isDisabled = false;
    }
}
