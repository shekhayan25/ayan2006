// 5. Given a file called insta_followers.txt containing Instagram usernames (one per line), write a program to count and display the total number of followers listed in the file.<br><br><em><strong>Constraint:</strong> Do not use any array or vector to store the names—just count as you read.</em>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("insta_followers.txt");

    string username;
    int count = 0;

    while (getline(file, username))
    {
        count++;
    }

    file.close();

    cout << "Total Followers: " << count << endl;

    return 0;
}