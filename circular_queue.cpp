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