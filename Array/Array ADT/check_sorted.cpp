#include <iostream>
using namespace std;

string isSorted(int arr[],int n) {
    for (int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1])
        return "Array is not sorted";
    }
    return "Array is sorted";

}

int main() {

    int n,j;
    int check;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int A[n];
    cout <<"Enter elements of array"<<endl;
    for (int i = 0; i<n; i++) {
        cin>>A[i];
    }
    cout<<isSorted(A,n)<<endl;

    return 0;
}