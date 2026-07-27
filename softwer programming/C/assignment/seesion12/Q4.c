// 4.Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

#include <stdio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

void main()
{
    struct InstaProfile profile =
    {
        "Ayan",
        1200,
        {"BSc IT Student & Flutter Programmer", 20}
    };

    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Description : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);
}