// 4. Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.

#include <iostream>
#include <vector>
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

    void display()
    {
        if (isDone)
            cout << title << " - DONE" << endl;
        else
            cout << title << " - PENDING" << endl;
    }
};

class TaskList
{
public:
    vector<Task> tasks;

    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index)
    {
        tasks[index].markDone();
    }

    void showTasks()
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList taskList;

    taskList.addTask("Complete Assignment");
    taskList.addTask("Study C++");
    taskList.addTask("Practice Programming");

    taskList.markTaskDone(1);

    cout << "Task List:" << endl;
    taskList.showTasks();

    return 0;
}