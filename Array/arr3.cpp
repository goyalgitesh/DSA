// reversing an array

#include <iostream>
#include "mytemplate.cpp"
using namespace std;

int main() {

    int n;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int A[n];
    cout <<"Enter elements of array"<<endl;
    for (int i = 0; i<n; i++) {
        cin>>A[i];
    }

for (int i = n-1; i>=0; i--) {
    cout <<A[i] <<" ";

    }
    cout << endl;
    cout<<add(20,30);

 return 0;
}