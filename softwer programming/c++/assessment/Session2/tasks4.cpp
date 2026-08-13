// 4. Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs as an empty array inside the constructor.</em>

#include <iostream>
#include <vector>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string date, bool publicStatus)
    {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
        songs = {};
    }

    void addSong(string songTitle)
    {
        songs.push_back(songTitle);
    }

    void displaySongs()
    {
        cout << "Songs List:" << endl;

        for (int i = 0; i < songs.size(); i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist playlist1("My Favorite Songs", "12-08-2026", true);

    playlist1.addSong("Tum Hi Ho");
    playlist1.addSong("Kesariya");
    playlist1.addSong("Apna Bana Le");

    playlist1.displaySongs();

    return 0;
}