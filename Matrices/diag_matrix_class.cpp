#include <iostream>
using namespace std;

class Dia_Mat {
private:
int n;
int *A;
public:
Dia_Mat(int n) {
    this->n = n;
    A = new int[n];
}
void set(int i,int j,int x) {
        if (i==j)
        A[i-1] = x;
}

int get (int i, int j) {
    if (i==j)
    return A[i-1];
    else
    return 0;

}

void display() {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i==j)
            cout<<A[i-1]<<" ";
            else
            cout<<0<<" ";
        }
        cout <<endl;

    }



}
~Dia_Mat() {
delete []A;

}
};

int main() {

    Dia_Mat d1(5);
     d1.set(1,1,3);
    d1.set(2,2,7);
    d1.set(3,3,4);
    d1.set(4,4,9);
    d1.set(5,5,6);
    d1.display();

    return 0;
}
