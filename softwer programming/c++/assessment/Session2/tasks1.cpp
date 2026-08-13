// 1.  Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of Playlist and print all its properties.



#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool publicStatus)
    {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
    }

    void display()
    {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;

        if (isPublic)
            cout << "Public: Yes" << endl;
        else
            cout << "Public: No" << endl;
    }
};

int main()
{
    Playlist playlist1("My Favorite Songs", "12-08-2026", true);

    playlist1.display();

    return 0;
}