#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the dimension(n*n) of Lower Traingular Square Matrix"<<endl;
cin>>n;
int M[n][n];
int totalnz = (n*(n+1))/2;
cout<<"Enter the "<<totalnz<<" non-zero elements"<<endl;

for (int i =1; i<=n; i++) {
    for (int j =1; j<=n; j++) {
        if (i<j)
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
ind = (n*(j-1)-((j-2)*(j-1))/2) + (i-j);
A[ind] = M[i][j];
}
}


cout <<"Array of non-zero elements in colummn major mapping is"<<endl;
for (int i =0; i<totalnz; i++) {
    cout<<A[i]<< " ";
    
}
cout<<endl;

cout<<"Lower triangular matrix is:"<<endl;
for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
        cout<<M[i][j]<<"  ";


}
cout<<endl;
}

return 0;

}