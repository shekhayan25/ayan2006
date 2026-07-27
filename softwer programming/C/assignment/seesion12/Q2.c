// 2. Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.

#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

void main()
{
    int i;

    struct FoodItem menu[3] =
    {
        {"Pizza", 299.0, 4.5},
        {"Burger", 149.0, 4.2},
        {"Pav Bhaji", 180.0, 4.7}
    };

    printf("----- Zomato Menu -----\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("Food Item %d\n", i + 1);
        printf("Item Name : %s\n", menu[i].itemName);
        printf("Price     : %.2f\n", menu[i].price);
        printf("Rating    : %.1f\n\n", menu[i].rating);
    }
}