// 1.
// Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Kesariya" << endl;
    file << "Tum Hi Ho" << endl;
    file << "Apna Bana Le" << endl;
    file << "Chaleya" << endl;
    file << "Heeriye" << endl;

    file.close();

    cout << "5 favorite songs saved successfully!" << endl;

    return 0;
}