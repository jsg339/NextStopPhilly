using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField]
    Transform[] views;
    [SerializeField]
    float transitionSpeed;

    Transform currentView;

    void Start()
    {
        
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            
            currentView = views[0];
            StartCoroutine(ExecuteAfterTime(2, views[1]));;
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            currentView = views[2];
            StartCoroutine(ExecuteAfterTime(2, views[3])); ;
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            currentView = views[4];
            StartCoroutine(ExecuteAfterTime(2, views[5])); ;
        }
        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            currentView = views[6];
            StartCoroutine(ExecuteAfterTime(2, views[7])); ;
        }
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if (currentView != null)
        {
            transform.position = Vector3.Lerp(transform.position, currentView.position, Time.deltaTime * transitionSpeed);


            Vector3 currentAngle = new Vector3(
             Mathf.LerpAngle(transform.rotation.eulerAngles.x, currentView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed),
             Mathf.LerpAngle(transform.rotation.eulerAngles.y, currentView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
             Mathf.LerpAngle(transform.rotation.eulerAngles.z, currentView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

            transform.eulerAngles = currentAngle;
        }
    }

    IEnumerator ExecuteAfterTime(float time,Transform vector)
    {
        
        yield return new WaitForSeconds(time);
        currentView = vector;


    }
}
