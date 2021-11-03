using System.Collections.Generic;
using UnityEngine;

public class JsonExamplpe : MonoBehaviour
{
    public ShoppingListJson ShoppingListJson = new ShoppingListJson();
    //List<List<string>> BuyList = new List<List<string>>();
    //BuyList.Add(new List<string>());

    void Start()
    {
        
        TextAsset asset = Resources.Load("Items") as TextAsset;

        if (asset != null)
        {
            ShoppingListJson = JsonUtility.FromJson<ShoppingListJson>(asset.text);
            foreach (Items item in ShoppingListJson.Items)
            {
                print(item.Name);
                print(item.Price);

            }


        }  
        else
        {
            print("Asset is null");
        }
    }

    //    List<T> GetRandomElements<T>(List<T> inputList, int count)
   //
   //     List<T> outputList = new List<T>();
//for (int i =0; i < count; i++)
   //    {
//            int index = Random.Range(0, inputList.Count);
   //         outputList.Add(inputList[index]);
       // }

   // }


}
