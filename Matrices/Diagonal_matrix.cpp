#include <iostream>
using namespace std;

void set(int A[],int i, int j, int x) {

if (i==j)
A[i-1] = x;
}

int get(int A[], int i, int j) {

if (i==j) return A[i-1];
else return 0;

}


int main() {
    int A[5];
    set(A,1,1,3);
    set(A,2,2,7);
    set(A,3,3,4);
    set(A,4,4,9);
    set(A,5,5,6);
    int Dm[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (i==j)
            Dm[i][j] = A[i];
            else
            Dm[i][j] = 0;
            
}

}
for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {

cout<<Dm[i][j]<< " ";

    }
    cout <<endl;

}

return 0;
}