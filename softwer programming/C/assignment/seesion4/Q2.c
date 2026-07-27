#include <stdio.h>
#include <string.h>

void main()
{
    float price, discount, finalPrice;
    char isMember[10];

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    printf("Are you a Member? (Yes/No): ");
    scanf("%s", isMember);

    finalPrice = price - (price * discount / 100);

    if (strcmp(isMember, "Yes") == 0 || strcmp(isMember, "yes") == 0)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("\nFinal Price = Rs. %.2f", finalPrice);
}