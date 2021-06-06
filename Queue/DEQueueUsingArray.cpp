#include <iostream>
using namespace std;

struct DEQueue{
    int size;
    int front;
    int rear;
    int *Q;
};

void InsertFront(DEQueue *q, int x) {
    if(q->front == -1)
        cout<<"Queue is full from left side"<<endl;
    else {
        q->Q[q->front] = x;
        q->front--;
    }

}


void InsertRear(DEQueue *q, int x) {
    if(q->rear == q->size-1) 
        cout<<"Queue is full from right side\n";
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int deleteFront(DEQueue *q) {
    int x = -1;
    if(q->front > q->rear) 
        cout<<"Queue is empty\n";
    else {
        q->front++;
        x = q->Q[q->front];

    }
    return x;
}


int deleteRear(DEQueue *q) {
    int x = -1;
    if(q->front > q->rear) 
        cout<<"Queue is empty\n";
    else {
        q->rear--;
        x = q->Q[q->rear];

    }
    return x;
}

void display(DEQueue q) {
    for (int i=q.front + 1; i<=q.rear; i++) {
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}


int main() {
    DEQueue q;
    q.size = 10;
    q.Q = new int[q.size];
    q.front = q.rear = -1;  // Initialization

    for (int i=1; i<10; i++) {
        InsertRear(&q,i);
    }
    display(q);
    deleteFront(&q);
    deleteFront(&q);
    deleteFront(&q);
    display(q);
    InsertFront(&q,12);
    InsertFront(&q,14);
    InsertFront(&q,16);
    display(q);
    deleteRear(&q);
    deleteRear(&q);
    deleteRear(&q);
    deleteRear(&q);
    display(q);






    return 0;
}

