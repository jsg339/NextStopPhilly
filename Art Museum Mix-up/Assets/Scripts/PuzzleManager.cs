using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PuzzleManager : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> worldPieces;
    [SerializeField]
    private List<Image> canvasPieces;
    [SerializeField]
    private Image fullPiece;
    [SerializeField]
    private GameObject myCamera;
    [SerializeField]
    private List<GameObject> uiBox;

    private float foundPieces = 0;
    private bool isCompleted = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.Q))
        {
            Application.Quit();
        }

        if (foundPieces == worldPieces.Count)
        {
            foreach (Image pieces in canvasPieces)
            {
                pieces.gameObject.SetActive(false);
            }

            fullPiece.gameObject.SetActive(true);
            foreach(GameObject obj in uiBox)
            {
                obj.SetActive(false);
            }
            foundPieces = 0;
            isCompleted = true;
        }
       
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.transform.tag.Equals("Piece"))
        {
            int foundIndex = worldPieces.IndexOf(collision.transform.gameObject);

            worldPieces[foundIndex].SetActive(false);
            canvasPieces[foundIndex].gameObject.SetActive(true);
            foundPieces++;
        }
    }

    public bool checkCompleted()
    {
        return isCompleted;
    }
}
