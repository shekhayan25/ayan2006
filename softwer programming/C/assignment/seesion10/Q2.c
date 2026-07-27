// 2.Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.

#include<stdio.h>
#include<string.h>

void main(){
    char username1[30],username2[30];

    printf("Enter First UserName: ");
    scanf("%s",username1);

    printf("Enter Second UserName: ");
    scanf("%s",username2);

    if(!strcmp(username1,username2))
    {
        printf("Both UserName are the same.");
    }
    else
    {
        printf("Both UserName are different.");
    }
}