#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            if (s[i] != t[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
