// 3.
// Modify your code to append a new song name entered by the user to my_fav_songs.txt without overwriting the existing list.<br><br><em><strong>Hint:</strong> Open the file in append mode using ofstream.</em>



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string songName;

    
    cout << "Enter a new song name: ";
    getline(cin, songName);

    
    ofstream file("my_fav_songs.txt", ios::app);

    
    file << songName << endl;

   
    file.close();

    cout << "Song added successfully!" << endl;

    return 0;
}