#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long N = 2e5 + 5;

map<ll,ll> mp;
ll a[N];

int main()
{

    ll T;
    cin >> T;
    while (T--)
    {
        mp.clear();
        ll n, ans = 0;
        cin >> n;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            ll bucket = 0;
            while ((1LL << bucket) <= a[i]) bucket++;
            mp[bucket]++;
        }

        for (const auto &p : mp)
        {
            ans += (p.second * (p.second - 1)) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
