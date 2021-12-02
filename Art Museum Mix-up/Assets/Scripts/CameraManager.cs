using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> gallery;

    private Vector3 diff;
    private Vector3 start;
    private int currentPiece;
    private bool movingLeft, movingRight;

    // Start is called before the first frame update
    void Start()
    {
        movingRight = false;
        movingLeft = false;
        currentPiece = 0;
    }

    // Update is called once per frame
   void Update()
    {
        print(currentPiece);
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            diff = Camera.main.ScreenToWorldPoint(Input.mousePosition) - Camera.main.transform.position;
        }

        if (Input.GetKeyUp(KeyCode.Mouse0))
        {
            if (diff.x < 0)
            {
                print("Left");
                diff = new Vector3(0, 0, 0);
                movingLeft = true;
                currentPiece -= 1;
            }
            else if (diff.x > 0)
            {
                print("Right");            
                diff = new Vector3(0, 0, 0);
                movingRight = true;
                currentPiece += 1;
            }
        }

        if (movingLeft)
        {
            previousPiece();
        }
        else if (movingRight)
        {
            nextPiece();
        }    
        if((!(currentPiece >= gallery.Count) && !(currentPiece < 0)) && transform.position.x == gallery[currentPiece].transform.position.x)
        {
            print("There");
            movingRight = false;
            movingLeft = false;
        }
    }

    private void nextPiece()
    {
        if(!(currentPiece >= gallery.Count))
        {
            Vector3 target = new Vector3(gallery[currentPiece].transform.position.x, this.transform.position.y, this.transform.position.z);

            Camera.main.transform.position = Vector3.MoveTowards(this.transform.position, target, 2000 * Time.deltaTime);
        }
    }

    private void previousPiece()
    {
        if (! (currentPiece < 0))
        {
            Vector3 target = new Vector3(gallery[currentPiece].transform.position.x, this.transform.position.y, this.transform.position.z);

            Camera.main.transform.position = Vector3.MoveTowards(this.transform.position, target, 2000 * Time.deltaTime);
        }
    }

}
