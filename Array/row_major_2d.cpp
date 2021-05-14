#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {

    int m,n;
    cout<<"Enter the value of m and n"<<endl;
    cin >> m >> n;
    int A[m][n];
    cout<<"Enter the "<<m*n<<" elements of array"<<endl;
    for(int i = 0; i<m ; i++) {
        for(int j = 0; j<n; j++ ) {
                cin>>A[i][j];


        }
    }

    cout<<"Array  is..."<<endl;
    for(int i = 0; i<m ; i++) {
        for(int j = 0; j<n; j++ ) {
                cout<<A[i][j]<<" ";


        }
    cout << endl;
    }
    int w = sizeof(int);
    int i,j,L0;
    cout<<"Enter the value of indices you want to find. for exp A[2][3] enter 2 and 3"<<endl;
    cin>>i>>j;
    cout<<"Enter the base address"<<endl;
    cin>>L0;

    int row_major = L0 + (i * n + j) * w;

    printf("\nAddress of A[%d][%d] is : %d",i,j,row_major);


    
    return 0;
    
    
    }