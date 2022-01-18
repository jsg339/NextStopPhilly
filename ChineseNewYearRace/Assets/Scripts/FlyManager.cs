using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlyManager : MonoBehaviour
{
    [SerializeField]
    private float velocity;
    [SerializeField]
    private KeyCode playerInput;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(playerInput))
        {
            this.GetComponent<Rigidbody2D>().velocity = Vector2.up * velocity;
        }
        
    }
}
