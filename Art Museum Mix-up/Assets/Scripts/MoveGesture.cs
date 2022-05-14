using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TouchScript.Gestures;
using TouchScript.Pointers;

public class MoveGesture : Gesture
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    // Pointers pressed this frame
    protected override void pointersPressed(IList<Pointer> pointers)
    {
        print(pointers[0].Type);
        Pointer rightPointer = pointers[0];
        for (int i = 0; i < pointers.Count; i++)
        {
            RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(pointers[i].Position), Vector2.zero);
            if (hit.collider != null)
            {
                GameObject gameObject = hit.transform.gameObject;

                if (gameObject.tag == "Piece")
                {
                    rightPointer = pointers[i];
                }
            }
        }
        this.GetComponent<Draggable>().down(rightPointer.Position);
    }

    // Pointers updated this frame
    protected override void pointersUpdated(IList<Pointer> pointers)
    {
        Pointer rightPointer = pointers[0];
        for (int i = 0; i < pointers.Count; i++)
        {
            RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(pointers[i].Position), Vector2.zero);
            if (hit.collider != null)
            {
                GameObject gameObject = hit.transform.gameObject;

                if (gameObject.tag == "Piece")
                {
                    rightPointer = pointers[i];
                }
            }
        }
            
        this.GetComponent<Draggable>().drag(rightPointer.Position);
    }

    // Pointers released this frame
    protected override void pointersReleased(IList<Pointer> pointers)
    {
        this.GetComponent<Draggable>().up();
    }

    // Pointers cancelled this frame
    protected override void pointersCancelled(IList<Pointer> pointers)
    {
        Debug.Log("Cancelled!");
    }
}
