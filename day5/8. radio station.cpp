#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    
    map<string,string> mp;

    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        string nm,ip;
        cin>>nm>>ip;
        
        mp[ip]=nm;
    }
    
    for(int i=0;i<m;i++)
    {
        string nm,ip;
        cin>>nm>>ip;
        
        ip.pop_back();
        
       cout<<nm<<" "<<ip<<";"<<" "<<"#"<<mp[ip]<<endl;
    }
    
    return 0;
}
