#include <bits/stdc++.h>
using namespace std;

int main() {
     long long int t;
    cin>>t;
    while(t--) {
        int k;
        int flag = 0;
        int mark[k] = {0};
        cin>>k;
        string lang[k];
        for (int i=0; i<k; i++) {
            cin>>lang[i];
        }
        for(int i=0; i<k; i++) {
                if (lang[i][0] >=97 && lang[i][0] <=109) 
                    mark[i] = 1; 
                else if(lang[i][0] >=78 && lang[i][0] <=90)
                    mark[i] = 2;
                              
        }

        for (int i=0; i<k; i++) {
            for (int j = 0; j<lang[i].size(); j++) {

                if(lang[i][j] >=97 && lang[i][j] <=109 && mark[i]==1) {
                    flag = 1;
                }
                else if(lang[i][0] >=78 && lang[i][0] <=90 && mark[i]==2) {
                    flag = 1;
                }

                else {
                    flag = 0;
                }



            }
        }

        if(flag ==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    return 0;


}