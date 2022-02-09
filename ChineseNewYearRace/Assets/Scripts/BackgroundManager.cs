using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundManager : MonoBehaviour
{
    [SerializeField]
    private GameObject bgArt1;
    [SerializeField]
    private Sprite bgArt2;
    [SerializeField]
    private float bgTimer;

    private float originalBgTimer;
    private bool switched = false;
    private Sprite originalBgArt;
    // Start is called before the first frame update
    void Start()
    {
        originalBgArt = bgArt1.GetComponent<SpriteRenderer>().sprite;

        originalBgTimer = bgTimer;
    }

    // Update is called once per frame
    void Update()
    {
        if(bgTimer <= 0)
        {
            if(switched)
            {
                bgArt1.GetComponent<SpriteRenderer>().sprite = originalBgArt;
                switched = false;
                bgTimer = originalBgTimer;
            }
            else
            {
                bgArt1.GetComponent<SpriteRenderer>().sprite = bgArt2;
                switched = true;
                bgTimer = originalBgTimer;
            }
            
        }
        bgTimer -= Time.deltaTime;
    }
}
