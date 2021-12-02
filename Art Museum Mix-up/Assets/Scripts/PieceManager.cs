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

    [SerializeField]
    public GameObject handRight;
    [SerializeField]
    public GameObject handLeft;

    private GameObject hand;

    bool checkPinch = false;
    private float foundPieces = 0;

    // Start is called before the first frame update
    void Start()
    {
        foundPieces = 0;
    }

    // Update is called once per frame
    void Update()
    {

        if(Input.GetKeyDown(KeyCode.Q))
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
        if (checkPinch)
        {
            RaycastHit raycastHit;
            Ray ray = new Ray(Camera.main.transform.position, (hand.transform.position - Camera.main.transform.position) * 1000);
            Debug.Log(Camera.main.transform.position);
            Debug.Log(hand.transform.position);
            Debug.DrawRay(Camera.main.transform.position,(hand.transform.position - Camera.main.transform.position)*1000 ,Color.green, 10, false);
            if (Physics.Raycast(ray, out raycastHit, 10000f))
            {
                Debug.Log(raycastHit.transform.name);
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
    public void PinchTrueLeft()
    {
       
        checkPinch = true;
        hand = handLeft;
    }
    public void PinchFalseLeft()
    {
        checkPinch = false;
        hand = null;
    }
    public void PinchTrueRight()
    {

        checkPinch = true;
        hand = handRight;
    }
    public void PinchFalseRight()
    {
        checkPinch = false;
        hand = null;
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }
}
