// 1.Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.

#include<stdio.h>
#include<ctype.h>


void getUserInitials(char name[])
{
    printf("%c%c", toupper(name[0]), toupper(name[6]));
    
}
        



void main()
{
    printf("initials: ");
    getUserInitials("Rohit Sharma");
}