#include <bits/stdc++.h>
using namespace std;

int count_duplicates(int arr[], int n,int k) {
   int count  = 0;
    for(int i=0; i<n; i++) { 

        if (arr[i] == k)
            count++;
}
 return count;

}

int main() {
int n = 10;
int arr[n] = {2,5,2,5,2,4,10,10,10,10};

cout<<count_duplicates(arr,n,10)<<endl;
cout<<count_duplicates(arr,n,2)<<endl;
cout<<count_duplicates(arr,n,5)<<endl;
cout<<count_duplicates(arr,n,4)<<endl;
}