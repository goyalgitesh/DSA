#include <iostream>
using namespace std;
class Node {
public:
int data;
Node *next;
}*head = NULL,*first = NULL;

void create (int A[],int n) {

    Node *t;
    Node *last;

    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
    last->next = head;
}

void Display(Node *p) {
do {

    cout<<p->data<<"->";
    p = p->next;
} while (p!= head);

}

void RDisplay(Node *p) {
static int flag = 0;
if (p != head || flag ==0) {
    flag = 1;
    cout<<p->data<<"->";
    RDisplay(p->next);   // recursive call
}

flag = 0;   // again make flag = 0 for future calls

}

int length(struct Node *p) {
int len = 0;

do {

    len++;
    p = p->next;
}while (p!=head);

return len;

}

void Insert(struct Node *p,int pos,int x) {
Node *t;
int i;


if(pos<0 || pos>length(head)) {
    cout<<"Invalid Position. Not in range"<<endl;
    return;
}

if (pos==0) {
t = new Node;
t->data = x;
if(head==NULL) {
    head = t;
    head->next = head;
}
else {
p = head;
while (p->next != head) {
    p = p->next;
}
p->next = t;
t->next = head;
head = t;
  }

}

else {

p = head;
for (i=0; i<pos-1;i++) {
    p = p->next;
}
t = new Node;
t->data = x;
t->next = p->next;
p->next = t;


}

}





int main() {
int A[] = {3,9,6,10,15,20,25};
int n = sizeof(A)/sizeof(int);
create(A,n);
Display(head);
cout<<endl;
Insert(head,4,12);  //in the middle
Insert(head,0,1);   // at first position
Insert(head,9,30);  // at last position
Display(head);
cout<<endl;



return 0;
}