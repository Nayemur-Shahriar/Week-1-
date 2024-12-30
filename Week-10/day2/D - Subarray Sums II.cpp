#include <bits/stdc++.h>
using namespace std;
#define ll long long

void count_subArray()
{
    ll n, t;
    cin >> n >> t;

    ll c = 0, s = 0;

    map<ll, ll> mp;

    mp[0] = 1;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s += x;

        if (mp.find(s - t) != mp.end())
        {
            c += mp[s - t];
        }

        mp[s]++;
    }

    cout << c << endl;
}

int main()
{
    count_subArray();
    return 0;
}
