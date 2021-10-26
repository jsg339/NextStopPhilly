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
    private Text pieceInfo;
    [SerializeField]
    private Button button;
    [SerializeField]
    private GameObject myCamera;
    [SerializeField]
    private List<GameObject> uiBox;

    private float foundPieces = 0;
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
            pieceInfo.gameObject.SetActive(true);
            button.gameObject.SetActive(true);
            foreach(GameObject obj in uiBox)
            {
                obj.SetActive(false);
            }
        }
       
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        print("Hit");
        if(collision.transform.tag.Equals("Piece"))
        {
            int foundIndex = worldPieces.IndexOf(collision.transform.gameObject);

            worldPieces[foundIndex].SetActive(false);
            canvasPieces[foundIndex].gameObject.SetActive(true);
            foundPieces++;
        }
    }
}
