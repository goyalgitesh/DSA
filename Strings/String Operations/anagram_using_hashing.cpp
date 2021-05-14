#include <iostream>
using namespace std;

int main() {
char A[] = "lagoy";
char B[] = "goyal";
int H[26] = {0};
int flag = 1;

for (int i=0; A[i] != '\0'; i++) {
H[A[i]-97]++;
}

for (int i=0; B[i] != '\0'; i++) {
H[B[i]-97]--;
}

for (int i=0; i<26; i++) {
if(H[i]!=0)
{
flag = 0;
break;
}
else
flag = 1;
}

if (flag==0)
cout<<"Not Anagram"<<endl;
else
cout<<"Anagram"<<endl;
return 0;


}