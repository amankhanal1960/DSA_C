#include <stdio.h>
#define maxsize 5

int main()
{
    int stack[maxsize];
    int top = -1;
    int choice, item;

    do
    {
        printf("\nEnter your choice: \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Top Element\n");
        printf("4. Display All Elements\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Push
            if (top == (maxsize - 1))
            {
                printf("Stack is full.\n");
            }
            else
            {
                printf("Enter the value: ");
                scanf("%d", &item);
                top = top + 1;
                stack[top] = item;
                printf("%d pushed onto the stack.\n", item);
            }
            break;

        case 2: // Pop
            if (top == -1)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                item = stack[top];
                top = top - 1;
                printf("Popped element is %d\n", item);
            }
            break;

        case 3: // Display Top Element
            if (top == -1)
            {
                printf("Stack is empty! No top element.\n");
            }
            else
            {
                printf("Top element is %d\n", stack[top]);
            }
            break;

        case 4: // Display All Elements
            if (top == -1)
            {
                printf("Stack is empty! No elements to display.\n");
            }
            else
            {
                printf("Stack elements are:\n");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
            break;

        case 5: // Exit
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5); // Exit if choice is 5

    return 0;
}
