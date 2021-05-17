#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void push(Stack *st, int x) {
if (st->top == st->size-1)
cout<<"Stack Overflow"<<endl;
else {

    st->top++;
    st->s[st->top] == x;
}

}

int pop(Stack *st) {
if (st->top == -1)
cout<<"Stack is Underflow"<<endl;
else {
int x;
x = st->s[st->top];
st->top--;
return x;

}
return -1;

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
    cout<<"Enter size of stack"<<endl;
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;
    push(&st,10);
    Display(st);
    push(&st,20);
    Display(st);
    push(&st,30);
    Display(st);
    pop(&st);
    Display(st);


    return 0;
}
