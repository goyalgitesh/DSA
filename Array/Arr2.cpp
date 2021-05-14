// Check	whether	n	is	present	in	an	array	of	size	m	or	not.
#include <iostream>
using namespace std;

int main() {

    int m,n;
    cout <<"Enter size of array"<<endl;
    cin >> m;
    int A[m];
    cout <<"Enter elements of array"<<endl;
    for (int i = 0; i<m; i++) {
        cin>>A[i];
    }
    cout <<"Enter the number which to be find in array"<<endl;
    cin >> n;
    
    for(int i =0; i<m; i++) {
        if(A[i]==n)
        cout<<"Element found at position "<<i+1<<endl;
        
    }
    return 0;
    

}