#include <bits/stdc++.h>
using namespace std;

struct Node {
char data;
struct Node *next;

}*top = NULL;

void push(char x) {
Node *t = new Node;
if(t == NULL)
    cout<<"Stack is FUll"<<endl;
else {
    t->data = x;
    t->next = top;
    top = t;

}

}

char pop() {
char x = '0';
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

int isBalanced(char *exp) {

    for(int i=0; exp[i] != '\0'; i++) {
        if(exp[i]== '(' )
        push(exp[i]);
        else if (exp[i]== ')' ) {
            if(top==NULL) {
                cout<<"Parenthesis not Matching"<<endl;
                return 0;
            }
            pop();
                
        }

    }
    if (top==NULL) {
        cout<<"Parenthesis Matching..."<<endl;
        return 1;
    }
    else {
        cout<<"Parenthesis Not Matching"<<endl;
        return 0;
    }


}





int main() {
    char *exp = "((a+b)*(c-d))";
    isBalanced(exp);



return 0;




}