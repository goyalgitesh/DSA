// Create	an	Array	of	size	10	of	integers.	Take	input	from	the	user	for	these	
//10	elements	and	print	the	entire	array	after	that
#include <iostream>
using namespace std;

int main() {

    int A[10];
    for (int i = 0; i<10; i++) {
        cin >> A[i];
    }
    for (int i = 0; i<10; i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}