using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PieceManager : MonoBehaviour
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

    private float foundPieces = 0;

    // Start is called before the first frame update
    void Start()
    {
        foundPieces = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (foundPieces == worldPieces.Count)
        {
            foreach (Image pieces in canvasPieces)
            {
                pieces.gameObject.SetActive(false);
            }

            fullPiece.gameObject.SetActive(true);
            pieceInfo.gameObject.SetActive(true);
            button.gameObject.SetActive(true);

            myCamera.GetComponent<CameraManager>().enabled = false;
        }

        //Check for mouse click 
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit raycastHit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out raycastHit, 10000f))
            {
                if (raycastHit.transform.tag.Equals("Piece"))
                {
                    int foundIndex = worldPieces.IndexOf(raycastHit.transform.gameObject);

                    worldPieces[foundIndex].SetActive(false);
                    canvasPieces[foundIndex].gameObject.SetActive(true);
                    foundPieces++;
                }
            }
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }
}
