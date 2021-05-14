#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first;

void create(int A[],int n)
{
 int i;
 Node *t,*last;
 first = new Node;
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 Node *t = new Node;
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 cout<<p->data<<"->"<<flush;
 p=p->next;
 }
 cout<<endl;
}
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 cout<<p->data<<"->"<<flush;

 }
 cout<<endl;
}

int countNodes(Node *t) {
    int count;
    while (t != NULL) {
        count += 1;
        t = t->next;
    }
    return count;
}
int main()
{
 Node *temp;
 int A[]={3,5,7,10,25,8,32,2,11,20};
 int n = sizeof(A)/sizeof(A[0]);
 create(A,n);

 Display(first);

cout<<"No. of nodes in linked list are: "<<countNodes(first)<<endl;

 return 0;
}