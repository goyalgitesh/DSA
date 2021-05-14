// Multiple missing elements in an sorted array with gap more than 1

#include <iostream>
using namespace std;

int main() {
    int A[] = {6,7,8,9,11,12,15,16,18,19};
    int n = sizeof(A)/sizeof(int);
    int diff = A[0]-0;
    for(int i=0; i<n; i++) {
        if (A[i]-i != diff) {
            while (diff < A[i] - i) {           // printing all missing elements
                cout<<i+diff<<" is missing"<<endl;
                diff++;
            }


        }
    }
    


    
}