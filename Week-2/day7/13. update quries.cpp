#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, m;
        cin >> n >>m;
    
    string s;
    cin >> s;
    
    vector<int> a(m);
    set<int> st;
    
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    
    for(int x : a)
    {
        st.insert(x-1);
    }
    
    string t;
    cin >> t;
    
    sort(t.begin(), t.end());
    
    int ind = 0;
    
    for(int x : st) 
    {
        s[x] = t[ind++];
    }
    cout <<s <<endl;
    }
}