#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
using namespace std;

int main() {
	FAST;
	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>k;
	    string s[k];
	    for(int i=0; i<k; i++)
	    {
	        cin>>s[i];
	    }
	    int flag=0;
	    for(int i=0; i<k; i++)
	    {
	        if(s[i][0]>='a' && s[i][0]<='m')
	        {
	            for(int j=0; j<s[i].size(); j++)
	            {
	                if((s[i][j]>='a' && s[i][j]<='m')==0)
	                {
	                    flag=1;
	                    break;
	                }
	           }
	           if(flag==1)
	              break;
	        }
	        else if(s[i][0]>='N' && s[i][0]<='Z')
	        {
	            for(int j=0; j<s[i].size(); j++)
	            {
	                if((s[i][j]>='N' && s[i][j]<='Z')==0)
	                {
	                    flag=1;
	                    break;
	                }
	           }
	           if(flag==1)
	              break;
	        }
	        else 
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;	
    };
	return 0;
}