// 3. Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone. Add a method markDone() that sets isDone to true, and a method display() that prints the task with its status.

#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    
    Task(string t)
    {
        title = t;
        isDone = false;
    }

    
    void markDone()
    {
        isDone = true;
    }

    // Display task
    void display()
    {
        cout << "Task: " << title << endl;

        if (isDone)
            cout << "Status: DONE" << endl;
        else
            cout << "Status: PENDING" << endl;
    }
};

int main()
{
    Task task1("Complete C++ Assignment");

    task1.display();

    cout << "\nAfter marking task as done:\n";

    task1.markDone();
    task1.display();

    return 0;
}