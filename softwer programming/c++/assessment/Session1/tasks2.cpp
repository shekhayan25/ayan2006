// 2. Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected task to 'DONE' in the array, then print the updated list.<br><br><em><strong>Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>

#include <stdio.h>
#include <string.h>

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

void markTaskDone(int index)
{
    strcat(tasks[index], " - DONE");
}

void printTasks()
{
    int i;

    printf("\nUpdated Task List:\n");

    for (i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main()
{
    int index;

    addTasks();

    printf("\nEnter task number to mark as DONE: ");
    scanf("%d", &index);
 
    markTaskDone(index - 1);

    printTasks();

    return 0;
}