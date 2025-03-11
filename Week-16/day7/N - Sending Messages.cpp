#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> v(n + 5);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            ll x = abs(v[i] - v[i+1])* a;

            ll mn = min(x, b);

            if (f > mn)
            {
                f =  f-mn;
            }
            else
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") <<endl;
    }
    return 0;
}

