#include <iostream>
using namespace std;

class team {
public:
int p;
int v;
int t;

int NoOfProb() {
if (p==1 && v==1)
return 1;
else if (p==1 && t==1)
return 1;
else if (v==1 && t==1)
return 1;
else
return 0;

}

};

int main() {
    int n;
    int count = 0;
    cin>>n;
    team t[n];
    for (int i=0; i<n; i++) {
        cin>>t[i].p>>t[i].v>>t[i].t;
        count += t[i].NoOfProb();

    }
    cout<<count;

return 0;

}