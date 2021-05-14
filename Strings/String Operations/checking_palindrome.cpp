#include <iostream>
using namespace std;

int main() {
    string A = "NICE";
    int i,j;
    int flag;
    for (i=0,j= A.size()-1; i<j; i++,j--) {
        if (A[i] != A[j]) {
        flag = 0;
        break;
    }
        else
        flag = 1;
}

if (flag == 1)
cout<<"String is Palindrome"<<endl;
else
cout<<"String is not Palindrome"<<endl;


return 0;

}
