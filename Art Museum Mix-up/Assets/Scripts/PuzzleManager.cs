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
    private List<GameObject> canvasPieces;
    [SerializeField]
    private GameObject fullPiece;
    [SerializeField]
    private GameObject myCamera;

    private float foundPieces = 0;
    private bool isCompleted = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (foundPieces == worldPieces.Count)
        {
            this.transform.Find("PiecePart1").gameObject.SetActive(false);

            foreach (GameObject pieces in canvasPieces)
            {
                pieces.gameObject.SetActive(false);
            }

            fullPiece.gameObject.SetActive(true);

            foundPieces = 0;
            isCompleted = true;
        }
       
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.transform.tag.Equals("Piece"))
        {
            if (worldPieces.Contains(collision.transform.gameObject))
            {
                int foundIndex = worldPieces.IndexOf(collision.transform.gameObject);
                canvasPieces[foundIndex].gameObject.SetActive(true);
                Destroy(collision.transform.gameObject);
                foundPieces++;
            }
        }
    }

    public bool checkCompleted()
    {
        return isCompleted;
    }
}
