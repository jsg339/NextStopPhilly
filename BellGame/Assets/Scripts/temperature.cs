using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class temperature : MonoBehaviour
{
    [SerializeField] Transform top;
    [SerializeField] Transform bot;
    [SerializeField] Sprite one;
    [SerializeField] Sprite two;
    [SerializeField] Sprite three;
    [SerializeField] Sprite four;
    [SerializeField] GameObject TARGETIMAGE;

    [SerializeField] Image health;

    [SerializeField] Transform Temp;

    float temperaturePosition;
    [SerializeField] float temperatuerSize = 0.1f;
    [SerializeField] float TemperaturePower = 5f;
    float hookProgress;
    float hookPullVelocity;
    [SerializeField] float TemperatureGravityPower = 0.005f;
    [SerializeField] float hookProgressDegradtionPower = 0.1f;

    [SerializeField] Transform target;

    [SerializeField] GameObject render;
    float progress = 0;
    float targetPosition;
    float targetDestination;
    float targetTimer;

    [SerializeField] float timerMultiplicator = 3f;
    float speed;
    [SerializeField] float smoothMotion = 1f;
    void Start()
    {
        /*
        Bounds b = render.GetComponent<UnityEngine.UI.Image>(;
        float ySize = b.size.y;
        Vector3 ls = Temp.localScale;
        float distance = Vector3.Distance(top.position, bot.position);
        ls.y = (distance / ySize * temperatuerSize);
        Temp.localScale = ls;*/
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(progress);
        progressCheck();
        if(targetPosition < 0.25f)
        {
            TARGETIMAGE.GetComponent<UnityEngine.UI.Image>().overrideSprite = one;
        }
        if (targetPosition > 0.25f && targetPosition < 0.5f)
        {
            TARGETIMAGE.GetComponent<UnityEngine.UI.Image>().overrideSprite = two;
        }
        if (targetPosition > 0.5f && targetPosition < 0.75f)
        {
            TARGETIMAGE.GetComponent<UnityEngine.UI.Image>().overrideSprite = three;
        }
        if (targetPosition > 0.75f && targetPosition < 1f)
        {
            TARGETIMAGE.GetComponent<UnityEngine.UI.Image>().overrideSprite = four;
        }


        targetTimer -= Time.deltaTime;
        if(targetTimer < 0f) {
            targetTimer = UnityEngine.Random.value * timerMultiplicator;
            targetDestination = UnityEngine.Random.value;
        }

        targetPosition = Mathf.SmoothDamp(targetPosition, targetDestination, ref speed, smoothMotion);
        target.position = Vector3.Lerp(bot.position, top.position, targetPosition);


        tempe();
    }


    void tempe()
    {
        temperaturePosition += hookPullVelocity;
        temperaturePosition = Mathf.Clamp(temperaturePosition, temperatuerSize/2, 1 - temperatuerSize/2 );
        Temp.position = Vector3.Lerp(bot.position, top.position, temperaturePosition);
    }
    public void highCool()
    {
        hookPullVelocity -=   TemperaturePower * Time.deltaTime;
    }
    public void Cool()
    {
        hookPullVelocity -= 0.5f * TemperaturePower * Time.deltaTime;
    }
    public void heat()
    {
        hookPullVelocity += 0.5f*TemperaturePower * Time.deltaTime;
    }
    public void highHeat()
    {
        hookPullVelocity +=   TemperaturePower * Time.deltaTime;
    }

    void progressCheck()
    {
        float min = temperaturePosition - temperatuerSize / 2;
        float max = temperaturePosition + temperatuerSize / 2;

        if (min < targetPosition && targetPosition < max)
        {
            Debug.Log(temperaturePosition);
            progress += TemperaturePower * Time.deltaTime;

        }
        else
        {
            progress -= hookProgressDegradtionPower * Time.deltaTime;
        }
        progress = Mathf.Clamp(progress, 0f, 1f);

        health.fillAmount = Mathf.Lerp(health.fillAmount, progress, 3f * Time.deltaTime) ;
    }
}
