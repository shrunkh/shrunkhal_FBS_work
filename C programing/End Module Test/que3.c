#include <stdio.h>
#include <string.h>

#define MAX 10


struct Task
{
    int id;
    char desc[50];
    char status[20];   
};


void addTask(struct Task t[], int *n);
void updateTask(struct Task t[], int n);
void displayTasks(struct Task t[], int n);

int main()
{
    struct Task tasks[MAX];
    int n = 0, choice;

    do
    {
        printf("\n--- TO DO LIST MENU ---");
        printf("\n1. Add Task");
        printf("\n2. Update Task Status");
        printf("\n3. Display Tasks");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addTask(tasks, &n);
                break;

            case 2:
                updateTask(tasks, n);
                break;

            case 3:
                displayTasks(tasks, n);
                break;

            case 4:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }
    } while(choice != 4);

    return 0;
}


void addTask(struct Task t[], int *n)
{
    printf("\nEnter Task ID: ");
    scanf("%d", &t[*n].id);

    printf("Enter Description: ");
    scanf(" %[^\n]", t[*n].desc);

    strcpy(t[*n].status, "Pending");

    (*n)++;
    printf("Task added successfully!");
}


void updateTask(struct Task t[], int n)
{
    int id, i, found = 0;

    printf("\nEnter Task ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(t[i].id == id)
        {
            printf("Enter new status (Pending/Completed): ");
            scanf(" %s", t[i].status);
            found = 1;
            printf("Task updated successfully!");
            break;
        }
    }

    if(!found)
        printf("Task not found!");
}


void displayTasks(struct Task t[], int n)
{
    int i;

    if(n == 0)
    {
        printf("\nNo tasks available!");
        return;
    }

    printf("\n--- TASK LIST ---\n");
    printf("ID\tDescription\t\tStatus\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n",
               t[i].id, t[i].desc, t[i].status);
    }
}
