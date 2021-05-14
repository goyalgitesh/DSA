// Single missing element in sorted array

#include <iostream>
using namespace std;

void MissingOne_sorted(int arr[], int n) {
    int sum = 0;
    // only for Natural Numbers Array Input starting from 1
    int total = (arr[n-1]*(arr[n-1]+1))/2;
    for (int i=0; i<n; i++) {
        sum = sum + arr[i];
}
if (sum==total)
cout<<"No missing element"<<endl;
else
cout<<total-sum<<" is missing"<<endl;

    

}

void missing2(int arr[], int n) {
    //for single missing element if common difference is 1 and first element not starting from 1
    int cd;
    int l = arr[0];
    int h =  arr[n-1];
    int diff = l - 0;
    for (int i=0; i<n; i++) {
        cd = arr[i] - i;
    if (cd != diff) {
        cout<<"Missing Element is "<<i+diff<<endl;
        break;

    }

    }
    


}

int main() {
    int A[] = {1,2,3,4,5,6,8,9,10,11,12};
    int B[] = {6,7,8,9,11,12,13,14,15};
    int n = sizeof(A)/sizeof(int);
    int m = sizeof(B)/sizeof(int);

    MissingOne_sorted(A,n);
    missing2(B,m);
}