// 2.
// Read all song names from my_fav_songs.txt using ifstream and display each song on a new line in the console.



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("my_fav_songs.txt");

    string song;

    while (getline(file, song))
    {
        cout << song << endl;
    }

    file.close();

    return 0;
}