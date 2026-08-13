// 4. Demonstrate multilevel inheritance by creating a class GamingYouTuber that inherits from YouTuber and adds a method streamGame(gameName) which prints '[username] is now streaming [gameName] on [channelName]'.

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


class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on "
             << channelName << endl;
    }
};

int main()
{
    GamingYouTuber gamer;

    gamer.username = "Ayan";
    gamer.followers = 5000;
    gamer.channelName = "Ayan Gaming";

    gamer.displayProfile();

    gamer.uploadVideo("GTA 5 Gameplay");

    gamer.streamGame("GTA 5");

    return 0;
}