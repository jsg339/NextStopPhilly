using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CurtainCreator : MonoBehaviour
{
    [SerializeField]
    private GameObject curtain;
    [SerializeField]
    private List<GameObject> buildings;

    [SerializeField]
    private float timer;
    [SerializeField]
    private float height;

    private float orginalTimer;

    // Start is called before the first frame update
    void Start()
    {
        orginalTimer = timer;
    }

    // Update is called once per frame
    void Update()
    {
        if(timer <= 0)
        {
            GameObject newCurtain = Instantiate(curtain);
            newCurtain.transform.position = transform.position;
            GameObject newBuilding = Instantiate(buildings[Random.Range(0, buildings.Count)]);
            newBuilding.transform.position = newCurtain.transform.GetChild(1).position;
            Destroy(newCurtain.transform.GetChild(1).gameObject);
            newBuilding.transform.SetParent(newCurtain.transform);

            Destroy(newCurtain, 30);

            timer = orginalTimer;
        }

        timer -= Time.deltaTime;
    }
}
