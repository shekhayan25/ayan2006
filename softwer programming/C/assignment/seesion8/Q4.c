// 4.Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different products.

#include <stdio.h>

char* formatPrice(int price)
{
    static char formattedPrice[20];

    sprintf(formattedPrice, "RS.%d", price);

    return formattedPrice;
}

void main()
{
    printf("Laptop   : %s\n", formatPrice(59999));
    printf("Mobile   : %s\n", formatPrice(15999));
    printf("Keyboard : %s\n", formatPrice(1599));
}