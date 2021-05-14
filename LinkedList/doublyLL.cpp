#include <iostream>
using namespace std;

class Node {
public:
 Node *prev;
 int data;
 Node *next;


}*first = NULL;

void create(int A[],int n) {


Node *t,*last;
first = new Node;
first->data = A[0];
first->next = first->prev = NULL;
last = first;

for (int i = 1; i < n; i++)
{
    t = new Node;
    t->data = A[i];
    //t->next = last->next;
    t->prev = last;
    last->next = t;
    last = t;
}
}

int length(Node *p) {
int len = 0;
while (p != NULL) {
    len++;
    p = p->next;
}
return len;

}

void Display(Node *p) {
while (p)
{
    cout<<p->data<<"<->";
    p = p->next;
    /* code */
}
cout<<endl;
}

void InsertPos(int pos,int x) {
if (pos<0 || pos > length(first))
{
cout<<"Invalid Position..try Again"<<endl;
return;
}
if (pos == 0) {
Node *t = new Node;
t->data = x;
t->prev = NULL;
t->next = first;
first = t;
}
else {
Node *p = first;
for (int i=1; i<pos-1; i++) {
    p = p->next;
}
Node *t = new Node;
t->data = x;
t->next = p->next;
t->prev = p;
if(p->next)
  p->next->prev = t;
p->next = t;

}
}

void deletePos(int pos) {
if (pos<0 || pos > length(first))
{
cout<<"Invalid Position..try Again"<<endl;
return;
}
if (pos==0) {
Node *p = first;
first = first->next;
delete p;
if(first)
first->prev = NULL;
}
else {
Node *p = first;
for (int i=0; i<pos-1; i++) {
p = p->next;
}
p->prev->next = p->next;
if (p->next)
    p->next->prev = p->prev;

delete p;




}

}

void reverse(Node *p) {
Node *temp;

while (p!=NULL) 
{
    temp = p->next;     // swapping pointers
    p->next = p->prev;  // swapping pointers
    p->prev = temp;     // swapping pointers

    p = p->prev;  // Iterating forward
    
    if(p!=NULL && p->next==NULL) {
        first = p;
    }
}

}


struct Node* update(Node* start,int p)
{
    Node *q = start;
    Node *s;
    Node *r;
    
    for (int i=1; i<=p; i++) {
        q = q->next;
    }
    
    q->next->prev = NULL;
    s = start;
    start = q->next;
    q->next = NULL;
    r = start;
    while (r != NULL) {
        r = r->next;
    }
    r->next = s;
    s->prev = r;
    
    
return start;

}




int	main()
{
    int A[] = {1,5,10,4,9,16,20};
    int n = sizeof(A)/sizeof(int);
    create(A,n);
    Display(first);
    update(first,2);
    //InsertPos(0,3);
    //InsertPos(5,15);
    //InsertPos(9,30);
    //Display(first);
    //reverse(first);
    //Display(first);
    //deletePos(0);
    //Display(first);
    //deletePos(6);
    //Display(first);

    return 0;
}
