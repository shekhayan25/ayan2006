// 1. Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings) to a global array and print all tasks using a for loop

#include <stdio.h>

char tasks[5][100];
int taskCount = 0;

void addTasks()
{
    int i;

    printf("Enter number of tasks (max 5): ");
    scanf("%d", &taskCount);

    if (taskCount > 5)
    {
        taskCount = 5;
    }

    for (i = 0; i < taskCount; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }
}

void printTasks()
{
    int i;

    printf("\nYour Tasks:\n");

    for (i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main()
{
    addTasks();
    printTasks();
}