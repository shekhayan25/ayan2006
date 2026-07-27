// 3. Create a Flipkart discount calculator that asks the user for the total cart amount. Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. Print the final amount to pay.<br><br><em><strong>Hint:</strong> Use nested ifs to check each discount slab.</em>

#include<stdio.h>

void main(){
    float amount,finalAmount;
    
    printf("Enter Total Cart Amount: ");
    scanf("%f",&amount);

    if(amount > 1000){
        if(amount > 2000)
        {
            finalAmount = amount - (amount * 20/100);
            printf("20%% Discount Applide!\n");
        }
        else
        {
            finalAmount = amount - (amount * 10/100);
            printf("10%% Discount Applide!\n");
        }

    }
    else
    {
        finalAmount = amount;
        printf("No Discount Applied!\n");
    }

    printf("Final Amount to Pay = Rs. %.2f", finalAmount);

}