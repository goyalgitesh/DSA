//finding duplicates in a sorted array using hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[] = {3,6,8,8,10,12,15,15,15,18,20};
    int n =  sizeof(A)/sizeof(int);
    int m = A[n-1];
    int H[m]; //size of Hash table is max element of Array A
    for(int i=0; i<m;i++) {
        H[i] = 0; //initialized full hash table with 0 in beginning
        //H = {0,0,0,............20 times}
    }
    for (int i=0; i<n; i++) {
        H[A[i]]++;
        
}
//Now hash table is : H = {0,0,0,1,0,0,1,0,2,0,1,0,1,0,0,3,0,0,1,0,1}
    for (int i=0; i<m; i++) {
        if (H[i] >1) {
            cout<<i<<" is appearing "<<H[i]<<" times"<<endl;
        }


    } 

    return 0;  
}