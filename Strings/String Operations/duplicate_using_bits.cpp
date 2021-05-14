// finding duplicate in strings using bits manipulation

#include <iostream>
using namespace std;

int main() {
char A[] = "finding";
int H = 0, x= 0;  // 4 bytes = 32 bits

for (int i=0; A[i] != '\0'; i++) {
x = 1;
x = x << A[i] - 97;  //bit left shifting

if (x & H > 0)     // bit Masking    
cout<<A[i]<<" is duplicate"<<endl;
else

H = x | H;      // bit Merging

}

return 0;




}