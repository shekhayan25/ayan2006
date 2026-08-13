// 5. Modify your Playlist class so that it auto-saves the playlist name to a file called autosave.txt when the object is destroyed, simulating an auto-save feature like Spotify.<br><br><em><strong>Hint:</strong> Write the file-saving code inside the destructor.</em>


#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
public:
    string name;

   
    Playlist(string n)
    {
        name = n;
        cout << "Playlist created: " << name << endl;
    }

    Playlist()
    {
        ofstream file("autosave.txt");

        file << name;

        file.close();

        cout << "Playlist automatically saved to autosave.txt" << endl;
    }
};

int main()
{
    Playlist playlist1("My Favourites");

    cout << "Playlist is active." << endl;

    return 0;
}