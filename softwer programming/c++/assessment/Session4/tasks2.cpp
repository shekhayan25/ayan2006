// 2. Build a YouTuber class that inherits from SocialMediaUser and adds a property channelName and a method uploadVideo(title) that prints 'Video [title] uploaded to [channelName]'.

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


class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

int main()
{
    YouTuber user1;

    user1.username = "Ayan";
    user1.followers = 1500;
    user1.channelName = "Ayan Tech";

    user1.displayProfile();

    user1.uploadVideo("C++ Tutorial");

    return 0;
}