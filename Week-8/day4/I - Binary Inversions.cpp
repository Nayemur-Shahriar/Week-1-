#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0, cnt = 0, mx = 0, one = -1, zero = -1;

        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                cnt++;
                zero = i;
            }
            else
            {
                ans += cnt;
                if (one == -1) one = i;
            }
        }
        mx = ans;

        if (zero != -1)
        {
            a[zero] = 1;
            cnt = 0, ans = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (a[i] == 0) cnt++;
                else ans += cnt;
            }
            mx = max(mx, ans);
            a[zero] = 0;
        }

        if (one != -1)
        {
            a[one] = 0;
            cnt = 0, ans = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (a[i] == 0) cnt++;
                else ans += cnt;
            }
            mx = max(mx, ans);
        }

        cout << mx << endl;
    }
    return 0;
}
