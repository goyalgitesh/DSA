#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
}*front = NULL , *rear = NULL;


void Display() {
    Node *p = front;
    while(p != NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

void enqueue(int x) {
    Node * t = new Node;           //Overflow Condition
    if(t==NULL)
        cout<<"Queue Overflow"<<endl;
    else {
        t->data = x;
        t->next = NULL;
        if(front == NULL) {      // first Node ( Special Case) Conditon;
            cout<<t->data<<" is the first Node Created. Now Queue is"<<endl;
            front = rear = t;
            Display();
        }
        else {
            rear->next = t;
            rear = t;
            cout<<x<<" is inserted. Now the queue is "<<endl;
            Display();
        }
    }
}


int dequeue() {
    int x = -1;
    Node *p;
    if(front==NULL)                     // Underflow Condition
        cout<<"Queue Underflow"<<endl;    
    else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
        cout<<x<<" is deleted. Now Queue is"<<endl;
        Display();
    }
    return x;
}

bool isFull() {
    Node *t = new Node;    // Queue becomes full when heap becomes full
    if(t==NULL) {
        cout<<"Queue is full"<<endl;    
        return true;
    }
    else {
        cout<<"Queue is not full"<<endl;
        return false;
    }
}

bool isEmpty() {
    if(front==NULL) {            // Queue becomes Empty when front and rear or one of them is NULL;
        cout<<"Queue is Empty"<<endl;
        return true;
    }
    else {
        cout<<"Queue is not Empty"<<endl;
        return false;
    }
}


int main() {
    isEmpty();
    isFull();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    isEmpty();
    isFull();



    return 0;
}