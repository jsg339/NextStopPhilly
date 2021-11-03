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
        if (SceneManager.GetActiveScene().buildIndex == 1)
        {
            int count = 0;

            foreach (Transform child in transform)
            {
                if (child.gameObject.GetComponent<PuzzleManager>().checkCompleted())
                {
                    count++;
                }
            }

            if (count == numPaintings)
            {
                SceneManager.LoadScene(2);
            }
        }
    }

    public void StartGame()
    {
        print("hi");
        SceneManager.LoadScene(1);
    }
}
