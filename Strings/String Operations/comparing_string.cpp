#include <iostream>
using namespace std;

void comparing_strings(string A,string B) {
    int i, j;

    for (i=0,j=0; A[i] !='\0'&&B[i] != '\0'; i++,j++) {
        if (A[i]!=B[j])
        break;
}
if (A[i]==B[j])
cout<<"Both are Equal"<<endl;
else if (A[i] < B[j])
cout<<"First string comes first in Dictionary"<<endl;
else
cout<<"Second String comes first in Dictionary"<<endl;


}





int main() {
    char A[] = "Painting";
    char B[] = "Painter";
    comparing_strings(A,B);


    return 0;

}