#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL, *second = NULL, *third = NULL;

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

void create2 (int A[],int n) {

    Node *t;
    Node *last;

    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

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

int count(Node *p) {
    int c;
    while (p != NULL) {
        c += 1;

        p = p->next;
    }

    return c;
}


int sum(Node *p) {
    int sum = 0;

    while (p!= NULL) {
        sum += p->data;
        p = p->next;
    }

    return sum;
}

void Insert(Node *p,int pos, int x) {
    Node *t;
    if(pos==0) {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos>0) {
        p = first;
        for (int i=0; i<pos-1 && p; i++) {
            p = p->next;
        }
        if(p) {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }



}

void InsertLast(int x) {
    Node *t = new Node;
    Node *last;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    first = last = t;
    else
    {
        last->next = t;
        last = t;
    }

}

void InsertSort(int x) {
    Node *p = first;
    Node *q = NULL;

    while (p && p->data <x) {

        q = p;
        p = p->next;
    }
    Node *t = new Node;
    t->data = x;
    t->next = q->next;
    q->next = t;


}

void deleteFirst() {
    Node *p;
    p = first;
    first = first->next;
    delete p;
}

void deletePos(int pos) {
    if (pos == 1)
    deleteFirst();
    else {

        Node *p = first;
        Node *q = NULL;

        for (int i = 0; i< pos-1; i++) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
}

void CheckSorted(Node *p) {
    int n = count(first);
    int flag = 1;

    for (int i=0; i<n-1; i++) {
        if ((p->next)->data < p->data)
        flag = 0;
    }

    if (flag == 1)
    cout<<"Sorted"<<endl;
    else
    cout<<"UnSorted"<<endl;


}

Node * LSearch(Node *p, int key) {

    while (p!=NULL) {
        if (key = p->data) {
        cout<<"Search is Successfull"<<endl;
        return p;
        }
        p = p->next;
    }
    cout<<"Search is unsuccessfull :("<<endl;
    return NULL;
}

void rev_list() {
Node *p = first;
Node *q = NULL;
Node *r = NULL;

while (p!= NULL) {
    r = q;
    q = p;
    p = p->next;
    q->next = r;  // reversing the links
}
first = q; // first points on last node

}

void rrev_list(Node *q, Node *p) {
    if (p!= NULL) {
        rrev_list(p,p->next);
        p->next = q;
    }
    else
    first = q;

}

void concat(Node *p, Node *q) {
    while (p != NULL) {
        p = p->next;
    }
    p->next = q;
}

void merge() {
    Node *last;
    
    if (first->data < second->data) {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }
    else {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }

    while (first != NULL && second != NULL) {

        if (first->data <second->data) {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if (first != NULL)
    last->next = first;
    else
    last->next = second;



}

void Rem_Duplicates() {
    Node *p = first;
    Node *q = first->next;

    while (q != NULL) {
        if (p->data != q->data) {
            p = q;
            q = q->next;
        }

        else {
            p->next = q->next;
            delete q;
            q = p->next;
}

    }
}

bool isLoop(Node *f) {
Node *p,*q;
p = q = f;
do {
    p = p->next;
    q = q->next;
    q = q != NULL ? q->next : NULL;
}
while(p && q && p!=q);
if(p==q)
return true;
else
return false;


}



int main() {
    Node *temp;
    int ch;
    int A[20];
    int B[20];
    int n,m;
    cout<<"\t\t***Linked List Operations Menu Driven Program***\n"<<endl;
    cout<<"1.Create\n2.Display\n3.InsertPos\n4.InsertLast\n5.InsertSorted\n6.DeleteFirst\n7.DeletePos\n8.Count"<<endl;
    cout<<"9.Sum\n10.Concat\n11.CheckSorted\n12.Merge\n13.Reverse\n14.LinearSearch\n15.RemovingDuplicates\n16.CheckLoop"<<endl;
    while(1) {
    cout<<"Enter the Choice"<<endl;
    cin>>ch;
    switch(ch) {
        case 1: {
            cout<<"Enter the Size of Linked List"<<endl;
            cin>>n;
            cout<<"Enter "<<n<<" data values"<<endl;
            for(int i=0; i<n; i++) {
                cin>>A[i];
            }
            create(A,n);
            cout<<"Linked List is Created Successfully"<<endl;
            Display(first);
            break;
    }
        case 2:
        Display(first);
        break;
        case 3: {
            int pos, x;
            cout<<"Enter the position where you want to insert the node "<<endl;
            cin>>pos;
            cout<<"Enter the data value you want to insert"<<endl;
            cin>>x;
            Insert(first,pos,x);
            cout<<x<<" is Inserted Successfully at pos "<<pos<<endl;
            Display(first);
       
        break;
    }
        case 4: {
            int x;
            cout<<"Enter the data value you want to insert"<<endl;
            cin>>x;
            InsertLast(x);
            cout<<x<<" is inserted Successfully in the end"<<endl;
            Display(first);
            break;
        }
        case 5:{
            int x;
            cout<<"Enter the data value you want to insert"<<endl;
            cin>>x;
            InsertSort(x);
            cout<<x<<" is inserted Successfully in the sorted order"<<endl;
            Display(first);
            break;
        }
        case 6: {
            deleteFirst();
            cout<<first->data<<" is deleted successfully"<<endl;
            Display(first);
            break;
        }
        case 7: {
            int pos;
             cout<<"Enter the position from which you want to delete the node "<<endl;
             cin>>pos;
             deletePos(pos);
             cout<<"Element from pos "<<pos<<" is deleted successfully"<<endl;
             Display(first);
             break;
             }
        case 8: {
            cout<<"Total No. of nodes in linked list are "<<count(first)<<endl;
            break;
        }
        case 9: {
            cout<<"Sum of all nodes in linked list are "<<sum(first)<<endl;
        break;
        }
        case 10: {
            cout<<"Enter the Size of second Linked List"<<endl;
            cin>>m;
            cout<<"Enter "<<m<<" data values"<<endl;
            for(int i=0; i<m; i++) {
                cin>>B[i];
            }
            create2(B,m);
            cout<<"Second Linked List is Created Successfully"<<endl;
            Display(second);
            concat(first,second);
            cout<<"Both Lists are concatenated Successfully"<<endl;
            Display(first);
            break;
        }
        case 11:CheckSorted(first);
                break;
        case 12: {
            cout<<"Enter the Size of second Linked List"<<endl;
            cin>>m;
            cout<<"Enter "<<m<<" data values"<<endl;
            for(int i=0; i<m; i++) {
                cin>>B[i];
            }
            create2(B,m);
            cout<<"Second Linked List is Created Successfully"<<endl;
            Display(second);
            merge();
            cout<<"Both Linked Lists are merged Successfully"<<endl;
            Display(third);
            break;
        }
        case 13: {
            rev_list();
            cout<<"Linked list is successfully reversed"<<endl;
            Display(first);
            break;
        }
        case 14: {
            int key;
            cout<<"Enter the element you want to search"<<endl;
            cin>>key;
            cout<<LSearch(first,key);
            break;
        }
        case 15:Rem_Duplicates();
        cout<<"Duplicates are removed successfully"<<endl;
        Display(first);
        break;
        case 16: {
            isLoop(first);
            break;
        }
        default:
        cout<<"Invalid Input...Try Again :("<<endl;
        break;
    }
}
  
    
    return 0;

}