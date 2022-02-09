using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;

public class BodyController : MonoBehaviour
{
    [SerializeField]
    private GameObject startPosition;
    [SerializeField]
    private GameObject endPosition;
    [SerializeField]
    private bool mirrorZ = true;
    [SerializeField]
    private float heightTimer;
    [SerializeField]
    private float maxHeight = 1f;
    private bool reachedMax;
    private float currentHeight;
    private float originalTimer;
    void Start()
    {
        reachedMax = false;
        originalTimer = heightTimer;
        currentHeight = this.GetComponent<SpriteShapeController>().spline.GetPosition(1).y;
        //Strech(gameObject, startPosition.transform.position, endPosition.transform.position, mirrorZ);
    }

    private void Update()
    {
        Spline spline = this.GetComponent<SpriteShapeController>().spline;

        spline.SetPosition(0, endPosition.transform.localPosition);
        spline.SetPosition(2, startPosition.transform.localPosition);

        if(heightTimer <= 0)
        {
            Vector3 newVector = new Vector3(spline.GetPosition(1).x, currentHeight, spline.GetPosition(1).z);
            spline.SetPosition(1, newVector);
            if (reachedMax)
                currentHeight -= 0.1f;
            else
                currentHeight += 0.1f;
            heightTimer = originalTimer;
        }
        if(currentHeight >= maxHeight)
        {
            reachedMax = true;
        }
        else if(currentHeight <= -maxHeight)
        {
            reachedMax = false;
        }

        heightTimer -= Time.deltaTime;
        //Strech(gameObject, startPosition.transform.position, endPosition.transform.position, mirrorZ);
    }
    public void Strech(GameObject sprite, Vector3 player1, Vector3 player2, bool _mirrorZ)
    {
        Vector3 centerPos = (player1 + player2) / 2f;
        sprite.transform.position = centerPos;
        sprite.transform.position = new Vector3(sprite.transform.position.x, sprite.transform.position.y, 0);
        Vector3 direction = player2 - player1;
        direction = Vector3.Normalize(direction);
        sprite.transform.right = direction;
        if (_mirrorZ) sprite.transform.right *= -1f;
        Vector3 scale = sprite.transform.localScale;
        scale.x = Vector3.Distance(player1, player2) / 2;
        sprite.transform.localScale = scale;
    }
}
