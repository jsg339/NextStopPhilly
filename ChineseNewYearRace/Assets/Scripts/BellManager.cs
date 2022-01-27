using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BellManager : MonoBehaviour
{
    [SerializeField]
    private float spawnTimer;
    [SerializeField]
    private float velocity;
    [SerializeField]
    private GameObject postion;
    [SerializeField]
    private float upTimer;

    private float vertVelocity;
    private float originalUpTimer;
    private float originalTimer;
    
    // Start is called before the first frame update
    void Start()
    {
        vertVelocity = velocity;
        originalUpTimer = upTimer;
        originalTimer = spawnTimer;
    }

    // Update is called once per frame
    void Update()
    {
        if (spawnTimer <= 0)
        {
            this.transform.position = postion.transform.position;
            spawnTimer = originalTimer;

        }
        if (upTimer <= 0)
        {
            upTimer = originalUpTimer;
            vertVelocity *= -1;
        }
        
        this.GetComponent<Rigidbody2D>().velocity = (Vector2.left * velocity) + (Vector2.up * vertVelocity);

        spawnTimer -= Time.deltaTime;
        upTimer -= Time.deltaTime;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag.Equals("Player"))
        {
            print("Win!");

            this.GetComponent<GameSceneManager>().nextScene();
        }
    }
}
