#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() 
{
    ll t;
    cin >> t;
    
    vector<string>v;
    
    string ans;
    map<string,int> mp;  

    for (int i =0; i<t; i++)
    {
        string s;
        cin >>s;
        v.push_back(s);
    }

    for(int i = t-1; i>=0; i--)
    {
        if (mp[v[i]] ==0) 
        {
            int sz = v[i].size();
            
            ans = ans+v[i].substr(sz-2,2); 
        }
        mp[v[i]]++;
    }

    cout<< ans<< endl;
    return 0;
}
