#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first;

void create (int A[],int n) {

    Node *t;
    Node *last;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

void Display(Node *p) {
    while (p!= NULL) {
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<endl;


}

int MaxEle(Node *p) {
    int max = INT32_MIN; // Minimum 32 Byte Integer (-32768)
    while (p!= NULL) {
        if (p->data > max)
        max = p->data;
        p = p->next;
    }

    return max;
}


int main() {
    int A[] = {2,20,4,50,60,12,35,67,95,32};
    int n = sizeof(A)/sizeof(A[0]);
    create(A,n);
    Display(first);
    cout<<"Maximum value from all nodes is: "<<MaxEle(first);

    return 0;

}