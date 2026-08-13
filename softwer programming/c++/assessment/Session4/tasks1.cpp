// 1. Create a base class called SocialMediaUser with properties username and followers, and a method displayProfile() that prints the username and follower count.

#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main()
{
    SocialMediaUser user1;

    user1.username = "Ayan";
    user1.followers = 1500;

    user1.displayProfile();

    return 0;
}