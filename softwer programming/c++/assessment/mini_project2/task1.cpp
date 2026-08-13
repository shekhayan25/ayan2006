// 1. Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.



#include <iostream>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main()
{
    Content content1;

    content1.title = "C++ Tutorial";
    content1.platform = "YouTube";
    content1.views = 5000;
    content1.status = "Published";

    content1.display();

    return 0;
}