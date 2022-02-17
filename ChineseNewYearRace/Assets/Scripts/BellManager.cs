using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BellManager : CurtainManager
{
   
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag.Equals("Player"))
        {
            print("Win!");

            this.GetComponent<GameSceneManager>().nextScene();
        }
    }
}
