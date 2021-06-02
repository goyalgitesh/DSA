#include <iostream>
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(Queue *q, int x) {
    if((q->rear+1)%q->size == q->front) 
        cout<<"Queue is full\n";
    else {
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q) {
    int x = -1;
    if(q->front == q->rear) 
        cout<<"Queue is Empty\n";
    else {
        q->front = (q->front + 1)%q->size;
        x = q->Q[q->front];

    }
    return x;
}

void display(Queue q) {
    int i = q.front + 1;
    do {
        cout << q.Q[i] << " ";
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);

    cout<<endl;
}

int isFull(Queue q) {
    if((q.rear+1)%q.size == q.front) { 
        cout<<"Queue is full\n";
        return 1;
    }
    
    else {
        cout<<"queue is not full"<<endl;
        return 0;
    }
}

int isEmpty(Queue q) {
    if(q.front == q.rear)  {
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
    q.front = q.rear = 0;

    enqueue(&q,10);
    enqueue(&q,20);
    display(q);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    enqueue(&q,60);
    display(q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    display(q);
     enqueue(&q,70);
    enqueue(&q,80);
    display(q);
    



    return 0;


}