#include <stdio.h>
#include <conio.h>

#define MAXSIZE 10

int queue[MAXSIZE];

void Insert();
void Delete();
void Display();

int main()
{
    int choice;
    do
    {
        printf("\n 1: insert \n 2: delete \n 3: Display \n 4: Exit\n");
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
            printf("Exiting");

        default:
            break;
        }
    } while (choice != 4);
    return 0;
}

void Insert()
{
    printf("aman khanal is a good boy");
}