using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.U2D;


public class LiveSystem : MonoBehaviour
{
    [SerializeField]
    private int lives = 3;
    [SerializeField]
    private List<GameObject> lifeCounter;
    [SerializeField]
    private GameObject myCamera;
    [SerializeField]
    private float shakeLength;
    private bool invincible = false;
    private bool blinking = false;
    private SpriteShapeRenderer body;
    private SpriteRenderer head, tail;
    private float shakeDuration = 0f;
    private float shakeMagnitude = 0.7f;
    private float dampingSpeed = 1.0f;
    private Vector3 initialPos;


    // Start is called before the first frame update
    void Start()
    {
        initialPos = myCamera.transform.localPosition;
        body = this.transform.gameObject.GetComponent<SpriteShapeRenderer>();
        head = this.transform.GetChild(0).GetComponent<SpriteRenderer>();
        tail = this.transform.GetChild(1).GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (invincible && !blinking)
        {
            StartCoroutine(startBlink());
        }
        if (shakeDuration > 0)
        {
            myCamera.transform.localPosition = initialPos + Random.insideUnitSphere * shakeMagnitude;

            shakeDuration -= Time.deltaTime * dampingSpeed;
        }
        else
        {
            shakeDuration = 0f;
            myCamera.transform.localPosition = initialPos;
        }
    }

    public void removeLive()
    {
        if (!invincible)
        {
            invincible = true;
            lives--;
            lifeCounter[lifeCounter.Count - 1].SetActive(false);
            lifeCounter.RemoveAt(lifeCounter.Count - 1);
            if (lives <= 0)
            {
                print("Lose!");

                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
            }
            StartCoroutine(resetInvulnerability());
            startShake();
        }
    }
    IEnumerator resetInvulnerability()
    {
        yield return new WaitForSecondsRealtime(2f);
        invincible = false;
    }

    IEnumerator startBlink()
    {
        body.enabled = false;
        tail.enabled = false;
        head.enabled = false;
        blinking = true;
        yield return new WaitForSecondsRealtime(0.5f);
        body.enabled = true;
        tail.enabled = true;
        head.enabled = true;
        yield return new WaitForSecondsRealtime(0.5f);
        blinking = false;
    }

    private void startShake()
    {
        shakeDuration = shakeLength;
    }
}
