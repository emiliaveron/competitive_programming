#include <stdio.h>

#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

typedef struct Queue{
    int data[100];
    int front;
    int rear;
} Queue;


Queue newQueue(){
    Queue q = {.front = -1, .rear = -1};
    return q;
}

bool queueIsEmpty(Queue q){
    return ((q.front == -1 && q.rear == -1)?true:false);
}

bool queueIsFull(Queue q){
    return ((q.front - q.rear == MAX_SIZE-1)?true:false);
}

void enqueue(Queue *q, int data){
    if (queueIsEmpty(*q)){
        q->rear = 0;
        q->front = 0;
        q->data[q->front] = data;
    }
    else{
        if (!queueIsFull(*q)){
            q->front++;
            q->data[q->front] = data;
        }  
        else printf("queue is full");
    }
    return;
}

int dequeue(Queue* q){
    if (!queueIsEmpty(*q)){
        int dequeued = q->data[q->rear];
        q->data[q->rear] = 0;
        q->rear++;
        printf("%d ", dequeued);
        return dequeued;
    }
    else{
        printf("queue is empty!\n");
        return -1;
    } 
}

int main(){
    Queue p = newQueue(); int choice, data;
    while(true){
        printf("choose operation\n\n1 - enqueue;\n2 - dequeue;\n3 - exit;\n\n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            printf("enter value\n");
            scanf("%d", &data);
            enqueue(&p, data);
            break;
            case 2:
            dequeue(&p);
            break;
        }
    }
}