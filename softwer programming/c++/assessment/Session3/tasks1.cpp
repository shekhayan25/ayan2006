// 1. Create a class called Playlist with a default constructor that sets the playlist name to 'My Favourites' and prints a welcome message when an object is created.

#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";

        cout << "Welcome to your Playlist!" << endl;
    }
};

int main()
{
    Playlist playlist1;

    cout << "Playlist Name: " << playlist1.name << endl;

    return 0;
}