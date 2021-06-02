#include <iostream>
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(Queue *q, int x) {
    if(q->rear == q->size-1) 
        cout<<"Queue is full\n";
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q) {
    int x = -1;
    if(q->front > q->rear) 
        cout<<"Queue is full\n";
    else {
        q->front++;
        x = q->Q[q->front];

    }
    return x;
}

void display(Queue q) {
    for (int i=q.front+1; i<=q.rear; i++) {
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}

int isFull(Queue q) {
    if(q.rear == q.size -1)  {
        cout<<"queue is full"<<endl;
        return 1;
    }
    
    else {
        cout<<"queue is not full"<<endl;
        return 0;
    }
}

int isEmpty(Queue q) {
    if(q.front > q.rear)  {
        cout<<"queue is empty"<<endl;
        return 1;
    }
    
    else {
        cout<<"queue is not empty"<<endl;
        return 0;
    }
}



int main() {
    Queue q;
    q.size = 7;
    q.Q = new int[q.size];
    q.front = q.rear = -1;

    enqueue(&q,10);
    enqueue(&q,20);
    display(q);
    enqueue(&q,30);
    enqueue(&q,40);
    display(q);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);
    display(q);
    isFull(q);
    dequeue(&q);
    display(q);
    dequeue(&q);
    display(q);
    isFull(q);
    isEmpty(q);



    return 0;


}