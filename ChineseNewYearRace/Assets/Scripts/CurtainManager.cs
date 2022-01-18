using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CurtainManager : MonoBehaviour
{

    [SerializeField]
    private float velocity;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.GetComponent<Rigidbody2D>().velocity = Vector2.left * velocity;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.transform.tag.Equals("Player"))
        {
            print("Lose!");
        }
    }
}
