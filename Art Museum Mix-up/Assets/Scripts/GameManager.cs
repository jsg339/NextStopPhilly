using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    [SerializeField]
    private int numPaintings;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (SceneManager.GetActiveScene().buildIndex == 2)
        {
            int count = 0;

            foreach (GameObject child in this.GetComponent<SceneSetup>().getCanvasObjects())
            {
                if (child.gameObject.tag.Equals("Canvas") && child.gameObject.GetComponent<PuzzleManager>().checkCompleted())
                {
                    count++;
                }
            }

            if (count == numPaintings)
            {
                SceneManager.LoadScene(3);
            }
        }
    }

    public void StartGame()
    {
        SceneManager.LoadScene(1);
    }
    public void RestartGame()
    {
        SceneManager.LoadScene(2);
    }
}
