#include <iostream>
using namespace std;

int main() {

    char A[] = "Python is a Dangerous Snake";
    char B[100];
    int i;
    for (i =0; A[i]!='\0'; i++) {

    }
    i = i-1;
    int j;
    for(j=0; i>=0; i--,j++) {
        B[j] = A[i];

}
B[j] = '\0';
cout<<B<<endl;


}

