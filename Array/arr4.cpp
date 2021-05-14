// sorting the given array

#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    int key,j;
    for (int i=1; i<size; i++) {
        key = arr[i];
        j = i=1;

        while(j>=0 && arr[j] > key) {

            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
}
for (int i =0; i<size; i++) {
    cout << arr[i] <<" ";


}

}

int main() {

    int n;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int A[n];
    cout <<"Enter elements of array"<<endl;
    for (int i = 0; i<n; i++) {
        cin>>A[i];
    }

    sort(A,n);

    return 0;
}