using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private VideoPlayer video;
    // Start is called before the first frame update
    void Start()
    {
        video.Play();
        StartCoroutine(StartUp());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator StartUp()
    {
        Time.timeScale = 0.000001f;
        yield return new WaitForSeconds(0.000009f);
        video.enabled = false;
        Time.timeScale = 1;
    }
}
