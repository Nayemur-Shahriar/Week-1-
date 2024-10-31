#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    
    map<string,int> mp;

    while(t--) 
    {
        string s;
        cin>>s;
        
        if(mp.find(s)!=mp.end())
        {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
        else
        {
            cout<<"OK"<<endl;
            mp[s]=1;
        }
        
        
    }    
        
    
    return 0;
}
