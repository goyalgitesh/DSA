#include <iostream>
using namespace std;

void perm(char s[], int k) {

static int A[10] = {0};
static char Res[10];
int i;

if (s[k] == '\0') {
    Res[k] = '\0';
    cout<<string(Res)<<endl;
}

else {
for ( i=0; s[i] != '\0'; i++) 
{
    if (A[i]==0) //letter is available
    {
        Res[k] = s[i];
        A[i] = 1;
        perm(s, k+1);
        A[i] = 0;



    }
}

}

}

int fact(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * fact(n - 1);  
}

int main() {

char s[] = "ABC";
int i;
for (i =0; s[i]!= '\0'; i++) {

}
cout<<"Total Permutation possible is "<<fact(i)<<endl;
perm(s,0);
return 0;

}