#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    map<ll,ll> mp;


    int r=0,l=0;
    ll  ans=0;

    while(l<n)
    {
        mp[v[l]]++;

        while(mp.size()>k)
        {
            mp[v[r]]--;

            if(mp[v[r]]==0) mp.erase(v[r]);
            r++;
        }

        ans =ans+l-r+1;
        l++;
    }
    cout << ans << endl;



return 0;
}
