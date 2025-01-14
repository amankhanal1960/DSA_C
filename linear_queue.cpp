#include <stdio.h>
// #include <conio.h>

#define MAXSIZE 10

int queue[MAXSIZE];
int rear = -1, front = -1;

void Insert();
void Delete();
void Display();

int main()
{
    int choice;
    do
    {
        printf("\n-----------------------Queue-----------------------");
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("Exiting Program.\n");

        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice != 4);

    return 0;
}

void Insert()
{
    int n;
    if (rear == (MAXSIZE - 1))
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Enter the value to add: ");
        scanf("%d", &n);
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = n;
        printf("Inserted %d.\n", n);
    }
}

void Delete()
{
    int n;
    if (rear < front)
    {
        printf("Queue is empty.");
    }
    else
    {
        n = queue[front];
        printf("Deleted element is %d", n);
        front++;
        if (rear < front)
        {
            rear = front = -1;
        }
    }
}
void Display()
{
    int i;
    int n;
    if (rear < front)
    {
        printf("Queue is empty.");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            n = queue[i];
            printf("\t %d", n);
        }
    }
}
