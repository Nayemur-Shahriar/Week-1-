#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, damage;

    cin >> n >> damage;

    vector<ll> m(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> m[i];
    }

    ll kill = 0;

    while (kill != n)
    {
        ll mind = max_element(m.begin(), m.end()) - m.begin();

        if (m[mind] - damage <= 0)
        {
            cout << mind + 1 << " ";
            kill++;
        }
        m[mind] -= damage;
    }
    cout <<endl;
    }
}
