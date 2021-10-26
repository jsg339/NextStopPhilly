using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Draggable : MonoBehaviour
{
    [SerializeField]
    private float speed;

    private Vector3 offset;
    private Vector2 screenPoint;
    private Vector2 curScreenPoint;
    private bool moving;
    private float originalSpeed;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnMouseDown()
    {
        screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);

        offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector2(Input.mousePosition.x, Input.mousePosition.y));

    }

    private void OnMouseDrag()
    {
        curScreenPoint = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
 
        Vector2 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;

        this.GetComponent<Rigidbody2D>().MovePosition(curPosition);
    }

    private void OnMouseUp()
    {
        this.GetComponent<Rigidbody2D>().velocity = (curScreenPoint - screenPoint) * speed;
    }
}
