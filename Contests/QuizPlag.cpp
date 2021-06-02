#include <bits/stdc++.h>
using namespace std;

int count_duplicates(int arr[], int n,int k) {
   int count  = 0;
    for(int i=0; i<n; i++) { 

        if (arr[i] == k)
            count++;
        
    }    

    return count;

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m,k;
        vector<int> v;
        cin>>n>>m>>k;
        int arr[k];
        for(int i=0; i<k; i++) {
            cin>>k;
        }
        for(int i=0; i<k; i++) {
            int num = count_duplicates(arr,k,arr[i]);
            if(num > 1 && i<n) {
                v.push_back(arr[i]);
            } 
          

        }
        if(!v.empty())
            cout<<v.size()<<" ";


        for(int i =0; i<v.size(); i++) {
            cout<<v[i]<<" ";
        }

        if(v.empty()) {
            cout<<0;
        }
        cout<<endl;
    }

    return 0;
}