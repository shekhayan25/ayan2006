// 2. Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called. Demonstrate by toggling the value twice and printing the result each time.

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

    void togglePublic()
    {
        isPublic = !isPublic;
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

    cout << "Original Value:" << endl;
    playlist1.display();

    playlist1.togglePublic();

    cout << "\nAfter First Toggle:" << endl;
    playlist1.display();

    playlist1.togglePublic();

    cout << "\nAfter Second Toggle:" << endl;
    playlist1.display();

    return 0;
}