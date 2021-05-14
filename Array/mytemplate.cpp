#include <iostream>
using namespace std;


void swap (int a, int b) {

    int temp;
    temp = a;
    a = b;
    b = temp;
}

int add ( int a, int b) {

    return a + b;
}

void print_array(int arr[], int n) {

    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}