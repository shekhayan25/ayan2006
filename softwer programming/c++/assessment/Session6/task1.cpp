// 1. Create a class called Song in your preferred OOP language with private properties title and artist. Add public getter and setter methods to access and modify these properties, then create an object and update its title.

#include <iostream>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    
    void setTitle(string t)
    {
        title = t;
    }


    string getTitle()
    {
        return title;
    }

  
    void setArtist(string a)
    {
        artist = a;
    }

   
    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song song1;

    
    song1.setTitle("Kesariya");
    song1.setArtist("Arijit Singh");

    
    cout << "Original Title: " << song1.getTitle() << endl;


    song1.setTitle("Tum Hi Ho");

   
    cout << "Updated Title: " << song1.getTitle() << endl;

    cout << "Artist: " << song1.getArtist() << endl;

    return 0;
}