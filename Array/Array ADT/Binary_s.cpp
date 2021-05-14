#include <iostream>
using namespace std;

// void binary_search(int arr[],int low,int high,int key) {
//     int mid = (low + high)/2;
//     if (key == arr[mid]) 
//     cout<<"Search Successful. Element found at index "<<mid<<endl;
    
//     else if(key > arr[mid])
//     binary_search(arr,low,mid-1,key);

//     else if(key < arr[mid])
//     binary_search(arr,mid+1,high,key);

//     else
//     cout<<"Search Unsuccessful. Element not found"<<endl;

// } 

int main() {

    int n,k;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int A[n];
    cout <<"Enter elements of array in sorted order for Binary Search."<<endl;
    for (int i = 0; i<n; i++) {
        cin>>A[i];
    }
    cout<<"After entering elements Array is"<<endl;
    for (int i = 0; i<n; i++) {
        cout<<A[i]<<" ";
}
cout <<endl;
cout<<"Enter the key you want to search"<<endl;
cin>>k;
int low = 0;
int high = n-1;
int mid;
while(low <= high) {
    mid = (low + high)/2;
    if (k == A[mid]) {
        cout<<"Search Successful. Element found at index "<<mid;
        return mid;
    }
    else if(k < A[mid])
    high = mid-1;
    else
    low = mid + 1;

}
//binary_search(A,A[0],A[n-1],k);
cout<<"Search Unsuccessful. Element not found."<<endl;
return -1;


}