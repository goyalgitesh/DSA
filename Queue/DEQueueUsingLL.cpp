#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
}*front = NULL,*rear = NULL;

void InsertFront(int x) {
    Node *t = new Node;
    if(t==NULL)
        cout<<"DEQueue is Overflow.."<<endl;
    else {
        t->data = x;
        t->prev = NULL;
        t->next = NULL;
        if(front==NULL)
            front = rear = t;
        
        t->next = front;
        front->prev = t;
        front = t;


    }
}


void display() {
    Node *p = front;
    while(p->next != NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}



int main() {
    InsertFront(10);
    InsertFront(20);
    display();






    return 0;
}