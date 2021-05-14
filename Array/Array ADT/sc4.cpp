//finding duplicates in a sorted array

#include <iostream>
using namespace std;

void Count_duplicates(int arr[],int n) {
    int j;
    for (int i=0; i<n-1; i++) {
        if(arr[i]==arr[i+1]) {
            j = i+1;
            while(arr[i]==arr[j]) 
            j++;
            cout<<arr[i]<<" is appearing "<<j-i<<" times"<<endl;
            i = j-1;
            
 }

    }
    


}

int main() {
    int A[] = {3,6,8,8,10,12,15,15,15,20};
    int n = sizeof(A)/sizeof(int);
    int lastDuplicate = 0;
    for(int i = 0; i <n; i++)  {
        if (A[i]==A[i+1] && A[i] != lastDuplicate) //checking if next element is equal to previous element
        cout<<A[i]<<endl; // and element is not equal to lastDuplicate element
        lastDuplicate = A[i];
        }

        Count_duplicates(A,n);

}