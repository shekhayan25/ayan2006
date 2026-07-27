// 2.Create a function addToCart that takes a shopping cart array and a product name, adds the product to the cart, and prints the updated cart. Demonstrate how passing the cart array by reference allows changes to persist outside the function.<br><br><em><strong>Hint:</strong> In languages like JavaScript, arrays are passed by reference. In C/C++, use pointers for reference behavior.</em>

#include<stdio.h>
#include<string.h>

void addToCart(char cart[][20],int *count,char product[])
{
    strcpy(cart[*count],product);
    (*count)++;
    printf("\nUpdated Cart: \n");
    for (int i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}
    void main(){
        char cart[10][20];
    int count = 0;

    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");
    addToCart(cart, &count, "Keyboard");

    printf("\nCart Outside Function:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
    }