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
        yield return new WaitForSeconds(0.5f);
        this.GetComponent<GameSceneManager>().nextScene();
    }
}
