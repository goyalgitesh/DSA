#include <iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m) {
    int arr3[m+n];
    int i,j,k;
    i = j = k =0;
    while (i<m && j<n) {
        if(arr1[i] < arr2[j])
        arr3[k++] = arr1[i++];
        else
        arr3[k++] = arr2[j++];
}
for (; i<m; i++) {
    arr3[k++] = arr1[i];
}
for (; j<n; j++) {
    arr3[k++] = arr2[j];
}

cout <<"After Merging array is"<<endl;
for (int l=0; l<m+n; l++) {
    cout<<arr3[l]<<" ";
}


}





int main() {

    int n,m;
    cout <<"Enter size of first array"<<endl;
    cin >> n;
    int A[n],B[m];
    cout <<"Enter elements of first array in sorted order"<<endl;
    for (int i = 0; i<n; i++) {
        cin>>A[i];
    }
    cout <<"Enter size of second array"<<endl;
    cin >> m;
    cout <<"Enter elements of second array in sorted order"<<endl;
    for (int j = 0; j<m; j++) {
        cin>>B[j];
    }

merge(A,n,B,m);



    


    return 0;
}