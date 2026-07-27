// 2. Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>

#include <stdio.h>
#include <string.h>

void main()
{
    int choice = 0;
    char newTeam[50];

    while (choice != 3)
    {
        
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nMy Favorite IPL Teams:\n");
            printf("1. Royal Challengers Bangalore\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Mumbai Indians\n");
            break;

        case 2:
            printf("Enter New Team Name: ");
            scanf(" %[^\n]", newTeam);
            printf("%s Added Successfully!\n", newTeam);
            break;

        case 3:
            printf("Thank You! Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }
    }
}