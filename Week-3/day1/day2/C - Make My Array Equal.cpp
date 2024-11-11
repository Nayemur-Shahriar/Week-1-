#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        set<ll> st;

        for(auto &it : v)
        {
            cin >> it;
            st.insert(it);
        }

        if(st.size() == 1)
        {
            cout<< "YES"<< endl;
        }
       
        else if(st.size() == 2)
        {
            bool flag = false;
            for(auto x : st)
            {
                if(x == 0)
                {
                    flag = true;
                    break;
                }
            }
            
           if(flag)  cout << "YES" << endl;
                
            else  cout << "NO" << endl;
               
        }
        else
        {
            cout <<"NO" << endl;
        }
    }
    return 0;
}
