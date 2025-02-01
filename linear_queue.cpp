#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct LinearQueue
{
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;

} LinearQueue;

void initialize(LinearQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

// check if the queue is empty
int isEmpty(LinearQueue *queue)
{
    return queue->front == -1;
}

// check if queue is full
int isFull(LinearQueue *queue)
{
    return queue->rear == MAX_SIZE - 1;
}

// Add an element to the rear
void enqueue(LinearQueue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue Overflow! Cannot enque %d.\n", value);
        return;
    }
    if (isEmpty(queue))
    {
        queue->front = 0; // initialzing the front when the first element is added
    }
    queue->rear++;
    queue->items[queue->rear] = value;

    printf("Enqueued %d\n", value);
}

void dequeue(LinearQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is Empty, Nothing to dequeue!\n");
        return;
    }

    int dequeValue = queue->items[queue->front];
    printf("Dequeued %d\n", dequeValue);

    if (queue->front == queue->rear)
    {
        queue->front = queue->rear = -1;
    }
    else
    {
        queue->front++;
    }
}

void display(LinearQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is Empty, Nothing to dequeue!\n");
    }
    printf("Queue: ");
    for (int i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->items[i]);
    }
    printf("\n");
}

int main()
{
    LinearQueue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    enqueue(&queue, 60);

    display(&queue);

    dequeue(&queue);
    dequeue(&queue);

    display(&queue);

    return 0;
}
