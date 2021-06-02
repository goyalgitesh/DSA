#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st) {
    cout<<"Enter size of stack"<<endl;
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}

void push(Stack *st, int x) {
if (st->top == st->size-1)
cout<<"Stack Overflow"<<endl;
else {

    st->top++;
    st->s[st->top] = x;
}

}

int pop(Stack *st) {
if (st->top == -1)
cout<<"Stack is Underflow"<<endl;
else {
int x;
x = st->s[st->top--];
return x;

}
return -1;

}

int peek(Stack st, int pos) {
    int x = -1;
    if(st.top-pos+1 <0) 
        cout<<"Invalid Position"<<endl;
    else {
        x = st.s[st.top-pos+1];
        cout<<"peek is "<<x<<endl;
    }

    return x;

}

int stackTop(Stack st) {
    if(st.top == -1)
    return -1;
    else{
    cout<<"Currently Stack Top is "<<st.s[st.top]<<endl;
    return st.s[st.top];
    }
}

bool isEmpty(Stack st) {
    if(st.top == -1) {
    cout<<"Stack is Empty"<<endl;
    return true;
    }
    else {
    cout<<"Stack is not Empty"<<endl;
    return false;
    }
}

bool isFull(Stack st) {
    if(st.top == st.size-1) {
    cout<<"Stack is Full"<<endl;
    return true;
    }
    else {
    cout<<"Stack is not Full"<<endl;
    return false;
    }
}


void Display(Stack st) {
for (int i= st.top; i>=0; i--) {
cout<<st.s[i]<<" ";
}
cout<<endl;
}

int main()
{
    Stack st;
    create(&st);
    isEmpty(st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    Display(st);
    isFull(st);
    pop(&st);
    Display(st);
    pop(&st);
    Display(st);
    cout<<peek(st,3)<<endl;
    stackTop(st);
    isEmpty(st);
    isFull(st);


    return 0;
}
