using System.Collections.Generic;
using UnityEngine;

public class JsonExamplpe : MonoBehaviour
{
    public ShoppingListJson ShoppingListJson = new ShoppingListJson();
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


}
