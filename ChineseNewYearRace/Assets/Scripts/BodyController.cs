using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BodyController : MonoBehaviour
{
    public GameObject startPosition;
    public GameObject endPosition;
    public bool mirrorZ = true;
    void Start()
    {
        Strech(gameObject, startPosition.transform.position, endPosition.transform.position, mirrorZ);
    }

    private void Update()
    {
        Strech(gameObject, startPosition.transform.position, endPosition.transform.position, mirrorZ);
    }
    public void Strech(GameObject sprite, Vector3 player1, Vector3 player2, bool _mirrorZ)
    {
        Vector3 centerPos = (player1 + player2) / 2f;
        sprite.transform.position = centerPos;
        Vector3 direction = player2 - player1;
        direction = Vector3.Normalize(direction);
        sprite.transform.right = direction;
        if (_mirrorZ) sprite.transform.right *= -1f;
        Vector3 scale = new Vector3(1, 1, 1);
        scale.x = Vector3.Distance(player1, player2);
        sprite.transform.localScale = scale;
    }
}
