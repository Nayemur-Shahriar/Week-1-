#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);

        for (ll &elem : v)
        {
            cin >> elem;
        }

        sort(v.begin(), v.end());

        ll idx = (n - 1) / 2;
        ll cnt = 0;

        for (ll i = idx; i < n && v[i] == v[idx];i++)
        {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
