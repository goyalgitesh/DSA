#include <iostream>
using namespace std;

int main() {

    char A[] = "finding";
    int H[25] = {0};  //hash table initialized with 0
    for (int i=0; A[i] != '\0'; i++) {
        H[A[i] - 97]++;
} 
for (int i =0; i<25; i++) {
if (H[i] > 1) 
    cout<<"Duplicate Found. Duplicate element is "<< char(i + 97)<<" and it is repeating "<<H[i]<<" times"<<endl;

}

return 0;

}