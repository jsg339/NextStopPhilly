using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayTime : MonoBehaviour
{
    [SerializeField]
    private Text text;

    // Start is called before the first frame update
    void Start()
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
        text.text = "Completed Time: " + min + ":" + sec;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
