using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArtManager : MonoBehaviour
{
    [SerializeField]
    private List<Texture> originalPieces;
    [SerializeField]
    private List<Texture> randomPieces;
    [SerializeField]
    private Text text;
    // Start is called before the first frame update
    void Start()
    {
        foreach(Transform children in this.transform)
        {
            originalPieces.Add(children.gameObject.GetComponent<RawImage>().texture);
        }

        prepRandom();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void prepRandom()
    {
        int count = 0;
        randomPieces.Clear();

        while (count <= originalPieces.Count - 1)
        {
            int randomPick = Random.Range(0, originalPieces.Count);
            if (!randomPieces.Contains(originalPieces[randomPick]))
            {
                randomPieces.Add(originalPieces[randomPick]);
                count++;
            }
        }
    }

    public void randomize()
    {
        for (int i = 0; i <= this.transform.childCount - 1; i++)
        {
            this.transform.GetChild(i).GetComponent<RawImage>().texture = randomPieces[i];
        }
        prepRandom();
    }

    public void checkPuzzle()
    {
        int numCorrect = 0;

        for (int i = 0; i <= this.transform.childCount - 1; i++)
        {
            if (transform.GetChild(i).gameObject.GetComponent<RawImage>().texture.Equals(originalPieces[i]))
            {
                numCorrect++;
            }
        }

        if (numCorrect == this.transform.childCount)
            text.text = "You are correct!";
        else
            text.text = "Not quite right!";

        numCorrect = 0;
    }
}
