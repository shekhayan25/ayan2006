// Q3. Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>

#include<stdio.h>

int isEligibleForOffer(int age, float ordervalue)
{
    return(age>=18 && ordervalue >= 500);
}

void main(){
    int age;
    float ordervalue;

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Enter Totle Ordervalue: ");
    scanf("%f",&ordervalue);

    if(isEligibleForOffer(age,ordervalue))
    {
        printf("Eligible For Offer");
    }
    else
    {
        printf("Not Eligible For Offer");
    }

}