#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the dimension(n*n) of Tri-Diagonal Square Matrix"<<endl;
cin>>n;
int M[n][n];
int totalnz = 3*n - 2;
cout<<"Enter the "<<totalnz<<" non-zero elements"<<endl;
for (int i =1; i<=n; i++) {
    for (int j =1; j<=n; j++) {
        if ((i-j > 1) || (j-i > 1))
        M[i][j] = 0;
        else {
        cout<<"Enter the M["<<i<<"]["<<j<<"] element"<<endl;
        cin>>M[i][j];
        }

    }
}
int A[totalnz];
int ind;
for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
if (i-j == 1)
ind = i - 1;
else if (i - j ==0)
ind = n + i - 2;
else if(j-i == 1) 
ind = (2*n-1) + (i - 1);

A[ind] = M[i][j];
}
}


cout <<"Array of non-zero elements in Diagonal by Diagonal mapping is"<<endl;
for (int i =0; i<totalnz; i++) {
    cout<<A[i]<< " ";
    
}
cout<<endl;

cout<<"Tri Diagonal matrix is:"<<endl;
for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
        cout<<M[i][j]<<"  ";


}
cout<<endl;
}

return 0;

}