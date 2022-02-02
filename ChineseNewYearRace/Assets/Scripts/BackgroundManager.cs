using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundManager : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> bgObjects;

    [SerializeField]
    private float timer;

    private float orginalTimer;

    // Start is called before the first frame update
    void Start()
    {
        GameObject newCurtain = Instantiate(bgObjects[Random.Range(0, bgObjects.Count)]);
        newCurtain.transform.position = this.transform.position;

        Destroy(newCurtain, 30);

        orginalTimer = timer;
    }

    // Update is called once per frame
    void Update()
    {
        if (timer <= 0)
        {
            GameObject newCurtain = Instantiate(bgObjects[Random.Range(0, bgObjects.Count)]);
            newCurtain.transform.position = this.transform.position;

            Destroy(newCurtain, 30);

            timer = orginalTimer;
        }

        timer -= Time.deltaTime;
    }
}
