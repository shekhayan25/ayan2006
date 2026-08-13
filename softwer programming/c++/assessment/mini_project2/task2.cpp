// 2.
// Build a console menu that lets users add new content ideas (title, platform, views, status) and save each entry to a text file named content_list.txt.<br><br><em><strong>Hint:</strong> Use file handling to append each new content item to the file.</em>


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string title, platform, status;
    int views;

    do
    {
        cout << "\n===== Content Menu =====" << endl;
        cout << "1. Add New Content" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "\nEnter Content Title: ";
            getline(cin, title);

            cout << "Enter Platform: ";
            getline(cin, platform);

            cout << "Enter Views: ";
            cin >> views;
            cin.ignore();

            cout << "Enter Status: ";
            getline(cin, status);

            // Open file in append mode
            ofstream file("content_list.txt", ios::app);

            // Save content to file
            file << "Title: " << title << endl;
            file << "Platform: " << platform << endl;
            file << "Views: " << views << endl;
            file << "Status: " << status << endl;
            file << "------------------------" << endl;

            file.close();

            cout << "\nContent saved successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << "\nExiting program..." << endl;
        }
        else
        {
            cout << "\nInvalid choice!" << endl;
        }

    } while (choice != 2);

    return 0;
}