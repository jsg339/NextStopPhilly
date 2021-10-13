using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ActivationMessage : MonoBehaviour
{

    [SerializeField] Text text;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GunMessageOn()
    {
        text.text = "GUN";

        Debug.Log("gun");
    }
    public void GunMessageOff()
    {

        text.text = "  ";
        Debug.Log("dec");

    }
    public void ThumbsUpMessageOn()
    {
        text.text = "ThumbsUp";

        Debug.Log("thumb");
    }
    public void ThumbsUpMessageOff()
    {

        text.text = "  ";

    }

    public void ChopMessageOn()
    {
        text.text = "Chop";

        Debug.Log("Chop");
    }
    public void ChopMessageOff()
    {

        text.text = "  ";

    }
    public void ClapMessageOn()
    {
        text.text = "Clap";

        Debug.Log("Clap");
    }
    public void ClapMessageOff()
    {

        text.text = "  ";

    }
}
