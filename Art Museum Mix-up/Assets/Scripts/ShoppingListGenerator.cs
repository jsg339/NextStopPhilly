using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShoppingListGenerator : MonoBehaviour
{
    public int HowMuchToBuy = 0;
    List<string> allitemlist = new List<string> { "Pancakes","Ham","Fries","Burger","Chocolate Cake","Strawberry Cake",
    "Donuts","Pies","Macarons","Eclairs","Cookies","Smoothie","Juice","Milkshake","Water Ice","Cheesesteak"};

     List<string> cartItems = new List<string>{};
 
    List<T> GetRandomElements<T>(List<T> inputList, int count)
    {
        List<T> outputList = new List<T>();
        for (int i = 0; i < count; i++)
        {
            int index = Random.Range(0, inputList.Count);
            outputList.Add(inputList[index]);
        }
        return outputList;
    }
 
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            var ToBuyList = GetRandomElements(allitemlist, HowMuchToBuy);
 
          //  Debug.Log("All items =>  " + string.Join(", ", allitemlist));
            Debug.Log("shoppping lists => " + string.Join(", ", ToBuyList));
        }
    }
}
