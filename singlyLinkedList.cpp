#include <stdio.h>
#include <stdlib.h>

// Defining the Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Creating a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning
void Insert(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to delete a node from the end
void deleteFromEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    if (temp->next == NULL)
    {
        printf("Deleted element is: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    printf("Deleted element is: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Function to traverse and display the elements of the list
void traverseAndDisplay(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    struct Node *temp = head;
    printf("Elements of the linked list: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to search for a specific value in the list
int Search(struct Node *head, int data)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return 1; // Element found
        }
        temp = temp->next;
    }
    return 0; // Element not found
}

int main()
{
    struct Node *head = NULL; // Initializing head pointer
    int choice, data;

    do
    {
        printf("\n1. Insert at beginning\n2. Delete from last\n3. Traverse and Display\n4. Search\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &data);
            Insert(&head, data);
            break;

        case 2:
            deleteFromEnd(&head);
            break;

        case 3:
            traverseAndDisplay(head);
            break;

        case 4:
            printf("Enter the value to search: ");
            scanf("%d", &data);
            if (Search(head, data))
            {
                printf("Element %d found in the list.\n", data);
            }
            else
            {
                printf("Element %d not found in the list.\n", data);
            }
            break;

        case 5:
            printf("Exiting Program.\n");
            break;

        default:
            printf("Invalid Choice. Please try again.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}
