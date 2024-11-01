#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
// for uniq c

        set<char>st;
        for(int i= 0; i< n;i++)
        {
            st.insert(s[i]);
        }

        map<char,char> mp;
        
        auto  rit = st.rbegin();
        
        for(auto it = st.begin(); it != st.end(); it++) 
        {
            mp[*it] = *rit;
            rit++;
        }

        for(int i =0; i< n;i++) 
        {
            cout<< mp[s[i]];
        }
        cout <<endl;
    }
    return 0;
}
