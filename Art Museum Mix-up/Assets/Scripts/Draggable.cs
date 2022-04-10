using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Draggable : MonoBehaviour
{
    [SerializeField]
    private float speed;

    private Vector2 offset;
    private Vector2 screenPoint;
    private Vector2 curScreenPoint;
    private Vector2 originalPos;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        /*if(Input.touchCount > 0)
        {
            for(int i = 0; i <= Input.touchCount - 1; i++)
            {
                Touch touch = Input.GetTouch(i);

                Vector3 wp = Camera.main.ScreenToWorldPoint(Input.GetTouch(i).position);
                if (GetComponent<Collider2D>().OverlapPoint(wp))
                {
                    if (touch.phase == TouchPhase.Began)
                    {

                        down();
                        screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);

                        offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector2(touch.position.x, touch.position.y));
                    }
                    else if (touch.phase == TouchPhase.Moved)
                    {

                        drag();
                        
                        curScreenPoint = new Vector2(touch.position.x, touch.position.y);

                        Vector2 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;

                        this.GetComponent<Rigidbody2D>().MovePosition(curPosition);
                        
                    }
                    else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
                    {
                        up();                     
                       // this.GetComponent<Rigidbody2D>().velocity = (curScreenPoint - screenPoint) * speed;
                    }
                    moving = true;
                } 
                if(!GetComponent<Collider2D>().OverlapPoint(wp) && moving)
                {
                    up();
                    moving = false;
                }
            }
        }*/
    }
    public void down()
    {
        screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.localPosition);
        originalPos = gameObject.transform.localPosition;//GameObject.Find("DragManager").GetComponent<DragManager>().getTouchPos();
        offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector2(Input.mousePosition.x, Input.mousePosition.y));

    }

    public void drag()
    {
        curScreenPoint = Camera.main.ScreenToWorldPoint(new Vector2(Input.mousePosition.x, Input.mousePosition.y));
 
        Vector2 curPosition = curScreenPoint + offset;

        this.GetComponent<Rigidbody2D>().MovePosition(curPosition);
    }

    public void up()
    {
        curScreenPoint = gameObject.transform.localPosition;//GameObject.Find("DragManager").GetComponent<DragManager>().getTouchPos();
        this.GetComponent<Rigidbody2D>().velocity = (curScreenPoint - originalPos) * speed;
    }
}
