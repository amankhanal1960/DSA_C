#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

// struct to implement stack using a singly linked list
typedef struct Stack
{
    Node *head;
} Stack;

// Function to initialize the stack
void initializeStack(struct Stack *stack)
{
    stack->head = NULL;
}
int isEmpty(struct Stack *stack)
{
    return stack->head == NULL;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
{
    Node *new_node = createNode(value);
    new_node->next = stack->head; // link new_node to the top node
    stack->head = new_node;       // update top to point to the new node
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is Empty!");
        return -1;
    }
    Node *temp = stack->head;
    int poppedValue = temp->data;
    stack->head = stack->head->next;
    free(temp);

    return poppedValue;
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is Empty!");
        return -1;
    }
    return stack->head->data;
}

int display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is Empty!");
        return -1;
    }
    Node *temp = stack->head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);

    printf("The values of stack is: ");
    display(&stack);

    printf("Top Element is %d\n", peek(&stack));

    printf("Pooped Element is %d\n", pop(&stack));
    printf("Pooped Element is %d\n", pop(&stack));

    printf("The new values of stack is: ");
    display(&stack);

    return 0;
}