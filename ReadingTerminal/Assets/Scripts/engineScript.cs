using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class engineScript : MonoBehaviour
{
    // Start is called before the first frame update
    List<GameObject> gameobjectList;
    public GameObject chosen;
    [SerializeField]
    Text text;
    public int Health = 3;
    [SerializeField]
     GameObject heart;
    [SerializeField]
    GameObject heart2;
    [SerializeField]
    GameObject heart3;

    void Start()
    {
        gameobjectList = new List<GameObject>(GameObject.FindGameObjectsWithTag("food"));
        chosen = gameobjectList[Random.Range(0, gameobjectList.Count)];

        text.text = chosen.name;
    }

    // Update is called once per frame
    void Update()
    {
        gameobjectList = gameobjectList.Where(item => item != null).ToList();
        if(chosen == null)
        {
            text.text = "NICE!";
        }

        if(Health > 3)
        {
            Health = 3;
        }
        if(Health < 0)
        {
            Health = 0;
           
        }
        switch (Health)
        {
            case 3:
                heart.gameObject.SetActive(true);
                heart2.gameObject.SetActive(true);
                heart3.gameObject.SetActive(true);
                break;
            case 2:
                heart.gameObject.SetActive(true);
                heart2.gameObject.SetActive(true);
                heart3.gameObject.SetActive(false);
                break;
            case 1:
                heart.gameObject.SetActive(true);
                heart2.gameObject.SetActive(false);
                heart3.gameObject.SetActive(false);
                break;
            case 0:
                heart.gameObject.SetActive(false);
                heart2.gameObject.SetActive(false);
                heart3.gameObject.SetActive(false);
                text.text = "SORRY :(";
                break;


        }
    }
}
