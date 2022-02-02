using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CurtainCreator : MonoBehaviour
{
    [SerializeField]
    private GameObject curtain;

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
            newCurtain.transform.position = this.transform.position;
            newCurtain.transform.localScale = new Vector3(1, Random.Range(1f, height));

            Destroy(newCurtain, 30);

            timer = orginalTimer;
        }

        timer -= Time.deltaTime;
    }
}
