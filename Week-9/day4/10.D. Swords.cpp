#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n, mx, g, ans;

    while (cin >> n)
    {
        vector<ll> arr(n);
        mx = ans = g = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mx < arr[i])
            {
                mx = arr[i];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if(arr[i] == mx) continue;

            ans += mx - arr[i];
            g = __gcd(g, mx-arr[i]);
        }

        cout << ans / g << " " << g << endl;
    }

    return 0;
}

