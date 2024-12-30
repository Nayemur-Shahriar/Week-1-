#include <bits/stdc++.h>
using namespace std;
#define ll long long

void count_subArray()
{
    ll n;
    cin >> n;

    ll c = 0, s = 0;
    map<ll, ll> mp;
    mp[0] = 1;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s += x;

        ll mod = s % n;
        if (mod < 0)
        {
            mod += n;
        }

        if (mp.find(mod) != mp.end())
        {
            c += mp[mod];
        }

        mp[mod]++;
    }

    cout << c << endl;
}

int main()
{
    count_subArray();
    return 0;
}
