#include <bits/stdc++.h>
using namespace std;

struct Node {
int data;
struct Node *next;

}*top = NULL;

void push(int x) {
Node *t = new Node;
if(t == NULL)
    cout<<"Stack is FUll"<<endl;
else {
    t->data = x;
    t->next = top;
    top = t;

}

}

int pop() {
int x = -1;
Node *p;
if(top==NULL)
    cout<<"Stack is Empty"<<endl;
else {
    p = top;
    top = top->next;
    x = p->data;
    free(p);

}
return x;

}

void Display() {
    Node *p = top;
    while (p != NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int peek(int pos) {

    Node *p = top;
    for(int i=0; p!= NULL && i<pos-1; i++) {
        p = p->next;
    }
    if (p != NULL)
        return p->data;
    else
        return -1;
}

int stackTop() {
    if(top)
        return top->data;
    else
        return -1;
}
int isEmpty() {
    return top ? 0 : 1;
}

int isFull() {
    Node *t = new Node;
    int r =  t ? 1 : 0;
    free(t);
    return r;
}






int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    Display();
    pop();
    pop();
    Display();

    




return 0;




}