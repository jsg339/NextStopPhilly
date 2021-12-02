using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TimerManager : MonoBehaviour
{
    [SerializeField]
    private float gameTime;
    public static float timer;
    [SerializeField]
    private Text text;
    // Start is called before the first frame update
    void Start()
    {
        TimerManager.timer = gameTime;
    }

    // Update is called once per frame
    void Update()
    {
        string sec, min;
        int seconds = Mathf.FloorToInt(TimerManager.timer % 60);
        if (seconds < 10)
        {
            sec = "0" + seconds.ToString();
        }
        else
        {
            sec = seconds.ToString();
        }
        min = Mathf.FloorToInt(TimerManager.timer / 60).ToString();
        text.text = "Time: " + min + ":" + sec;
        if (timer <= 0)
        {
            SceneManager.LoadScene(3);
        }
        else
        {
            timer -= Time.deltaTime;
        }
    }
}
