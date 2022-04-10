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
        this.GetComponent<Draggable>().down();
    }

    // Pointers updated this frame
    protected override void pointersUpdated(IList<Pointer> pointers)
    {
        this.GetComponent<Draggable>().drag();
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
