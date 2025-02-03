#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

typedef struct circularQueue
{
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;

} circularQueue;

void initCircularQueue(circularQueue *queue)
{
    queue->front = queue->rear = -1;
}
int isEmpty(circularQueue *queue)
{
    return queue->front == -1;
}

int isFull(circularQueue *queue)
{
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void Enqueue(circularQueue *queue, int value)
{

    if (isFull(queue))
    {
        printf("The queue is Full! Cannot enqueue!!");
        return;
    }

    else
    {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
    }
}

int Dequeue(circularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("The queue is Empty! Nothing to dequeue!!");
        return -1;
    }
    if front
        ->rear
}