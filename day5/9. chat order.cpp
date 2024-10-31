#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    
    map<string,string> mp;

    int n;
    cin>>n;
    
    string s[n];
    
    for(int i=0;i<n;i++)
    {
      
        cin>>s[i];
        
    }
    
    for(int i=n-1;i>=0;i--)
    {
        if(mp[s[i]]=="")
        {
            cout<<s[i]<<endl;
        }
        
       mp[s[i]] =s[i];
    }
    
    return 0;
}
