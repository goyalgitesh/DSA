#include <bits/stdc++.h>
#include <stdio.h>
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
    delete p;

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

int pre(char x) {
    if(x=='+'|| x=='-') 
        return 1;
    else if(x =='*' || x=='/')
        return 2;
    return 0;
    
}

bool isOperand(char x) {
    if(x=='+'|| x=='-' || x =='*' || x=='/')
        return false;
    else
        return true;
}

char * infToPost(char *infix) {
    int i=0,j=0;
    char *postfix;
    int len;
    for(len = 0; infix[len] != '\0'; len++) {

    }
    postfix = new char[len + 2];
    
    while(infix[i] != '\0') {
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];

        else {
            if(pre(infix[i] > pre(top->data)))
                push(infix[i++]);
            else
                postfix[j++] = pop();
        }
    }
    while (top != NULL) {
        postfix[j++] = pop();

    }
    postfix[j] = '\0';
    return postfix;

}



int main() {
    char infix[] = "a+b*c-d/e";
    push('#');

    char *postfix = infToPost(infix);
    cout<<postfix;
        



return 0;




}