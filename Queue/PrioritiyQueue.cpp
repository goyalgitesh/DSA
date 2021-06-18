// Priority Queues - Limited Set of Priorities Type Implementation

#include <iostream>
using namespace std;

struct PQueue {
    int size;
    int front;
    int rear;
    char *Q;

};

void enqueue(PQueue *q, int x) {
    if(q->rear == q->size-1) 
        cout<<"Queue is full\n";
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(PQueue *q) {
    int x = -1;
    if(q->front > q->rear) 
        cout<<"Queue is empty\n";
    else {
        q->front++;
        x = q->Q[q->front];

    }
    return x;
}

void display(PQueue q) {
    for (int i=q.front+1; i<=q.rear; i++) {
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}

int isFull(PQueue q) {
    if(q.rear == q.size -1)  {
      //  cout<<"queue is full"<<endl;
        return 1;
    }
    
    else {
      //  cout<<"queue is not full"<<endl;
        return 0;
    }
}

int isEmpty(PQueue q) {
    if(q.front > q.rear)  {
      //  cout<<"queue is empty"<<endl;
        return 1;
    }
    
    else {
      //  cout<<"queue is not empty"<<endl;
        return 0;
    }
}

int main() {
    PQueue q1, q2, q3;
    
    // q1 initialization
    q1.size = 7;
    q1.Q = new char[q1.size];
    q1.front = q1.rear = -1;

    // q2 initialization
    q2.size = 7;
    q2.Q = new char[q2.size];
    q2.front = q2.rear = -1;

    // q3 initialization
    q3.size = 7;
    q3.Q = new char[q3.size];
    q3.front = q3.rear = -1;

  
    // Array of Elements
    char A[] = {'A','B','C','D','E','F','G','H','I','J'};

    // Array of Priorities
    int P[] = {1,1,2,3,2,1,2,3,2,2};

    cout<<"Initially Array Elements with their priorities are \n";
    for (int i=0; i<10; i++) {
        cout<<A[i]<<":"<<P[i]<<"  ";

    }
    cout<<endl;

    // Insertion Logic
    for (int i=0; i<10; i++) {
        if(P[i]==1)
            enqueue(&q1,A[i]);
        
        else if(P[i]==2)
            enqueue(&q2,A[i]);

        else if (P[i]==3)
            enqueue(&q3,A[i]);
        else
            cout<<"Invalid Priority"<<endl;

    }

    cout<<"\n\t***After Insertion***\n"<<endl;

    // Displaying after Insertion
    cout<<"q1 queue elements are \n";
    display(q1);
    cout<<"q2 queue elements are \n";
    display(q2);
    cout<<"q3 queue elements are \n";
    display(q3);

    // Deletion Logic
    int n;
    cout<<"Enter the no. of times you want to perform deletion (<10)\n";
    cin>>n;
    for(int i =0; i<n; i++) {
        while(!isEmpty(q1)) {
            dequeue(&q1);
            cout<<"q1 queue elements are \n";
    display(q1);
    cout<<"q2 queue elements are \n";
    display(q2);
    cout<<"q3 queue elements are \n";
    display(q3);
        }
        while(!isEmpty(q2)) {
            dequeue(&q2);
            cout<<"q1 queue elements are \n";
    display(q1);
    cout<<"q2 queue elements are \n";
    display(q2);
    cout<<"q3 queue elements are \n";
    display(q3);
        }
        while(!isEmpty(q3)) {
            dequeue(&q3);
            cout<<"q1 queue elements are \n";
    display(q1);
    cout<<"q2 queue elements are \n";
    display(q2);
    cout<<"q3 queue elements are \n";
    display(q3);
        }
         

    }


return 0;

}


