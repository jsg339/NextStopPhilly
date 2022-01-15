using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneSetup : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> canvasObjects;

    [SerializeField]
    private List<GameObject> paintPieces;

    [SerializeField]
    private List<GameObject> positions;

    private List<GameObject> canvasInScene = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        int cardPos = Random.Range(0, 4), i = 0;

        canvasObjects[0].SetActive(true);
        paintPieces[0].SetActive(true);
        canvasInScene.Add(canvasObjects[0]);
        canvasObjects[0].transform.position = positions[cardPos].transform.position;
        canvasObjects[0].transform.rotation = positions[cardPos].transform.rotation;

        while (i < 4)
        {
            int randInt = Random.Range(0, canvasObjects.Count);

            if(i == cardPos)
            {
                i++;
                continue;
            }    

            if (! canvasInScene.Contains(canvasObjects[randInt]))
            {
                canvasObjects[randInt].SetActive(true);
                paintPieces[randInt].SetActive(true);
                canvasInScene.Add(canvasObjects[randInt]);
                canvasObjects[randInt].transform.position = positions[i].transform.position;
                canvasObjects[randInt].transform.rotation = positions[i].transform.rotation;
                i++;
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
