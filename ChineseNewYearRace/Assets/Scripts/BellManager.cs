using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BellManager : CurtainManager
{
    [SerializeField]
    private float rotationSpeed;
    [SerializeField]
    private AudioSource winSound;

    private void Start()
    {
        winSound.Stop();
    }
    private void FixedUpdate()
    {
        this.transform.Rotate(0, rotationSpeed*Time.deltaTime, 0);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {     
        if (collision.transform.tag.Equals("Player"))
        {
            StartCoroutine(playSound());
            print("Win!");

        }
    }

    IEnumerator playSound()
    {
        winSound.Play();
        Time.timeScale = 0.000001f;
        yield return new WaitForSeconds(0.000002f);
        Time.timeScale = 1f;
        this.GetComponent<GameSceneManager>().nextScene();
    }
}
