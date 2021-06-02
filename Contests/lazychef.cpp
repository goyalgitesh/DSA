#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--) {
        int x, m, d;
        cin>>x>>m>>d;
        int mx = x + d;
        int cw = x*m;
        cout<<min(mx,cw)<<endl;

    }


    return 0;


}