using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class ClickHandler : MonoBehaviour
{
    [SerializeField]
    private RawImage pic1;
    [SerializeField]
    private RawImage pic2;

    private void Start()
    {
        pic1 = null;
        pic2 = null; 
    }
    public void OnClick()
    {
        PointerEventData pointer = new PointerEventData(EventSystem.current);
        pointer.position = Input.mousePosition;
        List<RaycastResult> raycastResults = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointer, raycastResults);

        for (int index = 0; index < raycastResults.Count; index++)
        {
            RaycastResult curRaysastResult = raycastResults[index];
            if(pic1 == null)
            {
                pic1 = curRaysastResult.gameObject.GetComponent<RawImage>();
            }
            else if(pic2 == null)
            {
                pic2 = curRaysastResult.gameObject.GetComponent<RawImage>();
            }
              
        }

        if(pic1 != null && pic2 != null)
        {
            Texture holder = pic1.texture;
            pic1.texture = pic2.texture;
            pic2.texture = holder;
            pic1 = null;
            pic2 = null;
        }
    }
}