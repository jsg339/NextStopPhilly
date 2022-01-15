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
    private Image timeBar;
    // Start is called before the first frame update
    void Start()
    {
        TimerManager.timer = gameTime;
    }

    // Update is called once per frame
    void Update()
    {
        if (timer <= 0)
        {
            SceneManager.LoadScene(3);
        }
        else
        {
            timer -= Time.deltaTime;
            timeBar.fillAmount = timer / gameTime;
        }
    }
}
