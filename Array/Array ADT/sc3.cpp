// more than one missing element in an unsorted array

#include <iostream>
using namespace std;

int main() {

    int A[] = {3,7,4,9,12,6,1,11,2,10};
    int n = sizeof(A)/sizeof(int);
    int high = 12; //Maximum element
    int low = 1;    // Minimum element

    int B[11];   // new array(hashtable/bitset) of size = 11, range[low,high)
    for (int i=low; i<high; i++) {
        B[i] = 0;              // All elements initialized with  0  s in starting
    }
    for (int i=0; i<n; i++) {
        B[A[i]]++;       // if element is present at index in A increment that index in B
  }
  for (int i=low; i<high; i++) {
      if (B[i]==0)
      cout<<"Missing element is "<<i<<endl;
  }


 }