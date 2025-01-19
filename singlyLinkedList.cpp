#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} Node;

struct Node *createNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    return temp;
}

// insert at the begining of the list
struct Node *insertAtBeginning(struct Node *head, int data)
{

    // create a node with the given value
    struct Node *newNode = createNode(data);

    // set the next pointer of the new node to the current head
    newNode->next = head;

    // set the head to point to the new node
    head = newNode;

    return head;
}

// insert at the end of the list
struct Node *insertAtEnd(struct Node *head, int data)
{
    // create a new node with the given value
    struct Node *newNode = createNode(data);

    if (head == NULL)
    {
        return newNode;
    }

    // traverse to the end of the list
    struct Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;

    return head;
}

// Function to traverse and print all the elements of the list
void traverseLinkedList(struct Node *head, int data)
{
    // start from the head of the linked list
    struct Node *temp = head;

    // Traverse the linked list until the end (NULL)
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to search for a value in the linked list
bool searchLinkedList(struct Node *head, int target)
{
    struct Node *temp = head;
    // Traverse the Linked list
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Function to delete at the begining of the linked list
struct Node *deleteFromFirst(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    // Move the head pointer to the next node
    struct Node *temp = head;
    head = temp->next;

    free(temp);

    return head;
}

struct Node *deleteFromLast(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    else if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct Node *secondLast = head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }
    free(secondLast->next);
    secondLast->next = NULL;

    return head;
}
int main()
{
    struct Node *head = NULL;
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 40);
    head = insertAtBeginning(head, 50);
    head = insertAtEnd(head, 60);
    head = insertAtEnd(head, 70);
    head = insertAtEnd(head, 80);
    head = insertAtEnd(head, 90);
    head = insertAtEnd(head, 100);
    printf("Original Linked List: ");
    traverseLinkedList(head, 10);

    printf("Search 60: %s\n", searchLinkedList(head, 60) ? "Found" : "Not Found");
    printf("Search 110: %s\n", searchLinkedList(head, 110) ? "Found" : "Not Found");

    printf("After deleting from the first: ");
    head = deleteFromFirst(head);
    traverseLinkedList(head, 10);
    printf("After deleting from the last: ");
    head = deleteFromLast(head);
    traverseLinkedList(head, 10);
    return 0;
}