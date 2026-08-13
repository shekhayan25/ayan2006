// 3. Create a Podcaster class that also inherits from SocialMediaUser and adds a property podcastName and a method publishEpisode(episodeTitle) that prints 'Episode [episodeTitle] published on [podcastName]'.

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


class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main()
{
    Podcaster user1;

    user1.username = "Ayan";
    user1.followers = 2000;
    user1.podcastName = "Ayan Podcast";

    user1.displayProfile();

    user1.publishEpisode("Episode 1 - Introduction");

    return 0;
}