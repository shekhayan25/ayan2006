// 2.Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.

#include<stdio.h>

void main(){
    int choice;

    printf("Select Meal Time:\n");
    printf("1. Dreakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. snack\n");

    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
         printf("Suggestion: Poha");
        break;
    case 2:
        printf("Suggestion: Gujarati Thali");
        break;
    case 3:
        printf("Suggestion: Butter Paneer & Naan");
        break;
    case 4:
    printf("Suggestion: Samosa with Tea");
    break;

    default:
        printf("Try some fruits!");
        break;
    }

}