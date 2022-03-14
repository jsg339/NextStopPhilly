using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragManager : MonoBehaviour
{
    private Vector3 currentTouchPos;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void up()
    {
        RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

        if (hit.collider != null)
        {
            GameObject gameObject = hit.transform.gameObject;

            if (gameObject.tag == "Piece")
            {
                gameObject.GetComponent<Draggable>().up();
            }
        }
    }

    public void down()
    {
        RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

        if (hit.collider != null)
        {
            GameObject gameObject = hit.transform.gameObject;

            if (gameObject.tag == "Piece")
            {
                gameObject.GetComponent<Draggable>().down();
            }
        }
    }

    public void drag()
    {
        RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

        if (hit.collider != null)
        {
            GameObject gameObject = hit.transform.gameObject;

            if (gameObject.tag == "Piece")
            {
                gameObject.GetComponent<Draggable>().drag();
            }
        }
    }

    public void setTouchPos(string args)
    {
        string[] coord = args.Split('|');

        float x = float.Parse(coord[0]);
        float y = float.Parse(coord[1]);

        currentTouchPos = new Vector3(x, y, 0);
    }    
    public Vector3 getTouchPos()
    {
        return currentTouchPos;
    }
}
