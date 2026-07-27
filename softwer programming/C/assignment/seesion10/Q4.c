// 4. Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy(). Print the generated username.<br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the full name as the username.</em>


#include <stdio.h>
#include <string.h>

void main()
{
    char fullName[50];
    char username[10];

    printf("Enter Full Name: ");
    scanf("%s", fullName);

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }

    printf("Generated Username = %s", username);
}