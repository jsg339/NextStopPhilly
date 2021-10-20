using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    [SerializeField]
    float speed;

    private float yaw = 0.0f;

    public bool checkLeft = false;
    public bool checkRight = false;
    
    private float pitch = 0.0f;



    // Start is called before the first frame update
    void Start()
    {
        this.transform.eulerAngles = new Vector3(0, 0, 0.0f);
    }

    // Update is called once per frame
   void Update()
    {
        /*
        yaw += speed * Input.GetAxis("Mouse X");
        pitch -= speed * Input.GetAxis("Mouse Y");

        this.transform.eulerAngles = new Vector3(pitch, yaw, 0.0f); */
        if (checkLeft)
        {
            pitch -= speed;
            this.transform.eulerAngles = new Vector3(this.transform.rotation.x, pitch, this.transform.rotation.z);
           
        }
        else if (checkRight)
        {
            pitch += speed;
            this.transform.eulerAngles = new Vector3(this.transform.rotation.x, pitch, this.transform.rotation.z);
            
        }
    }

    public void MoveLeftTrue()
    {

        checkLeft = true;
    }
    public void MoveLeftFalse()
    {

        checkLeft = false;
    }

    public void MoveRightTrue()
    {

        checkRight = true;
    }
    public void MoveRightFalse()
    {

        checkRight = false;
    }


}
