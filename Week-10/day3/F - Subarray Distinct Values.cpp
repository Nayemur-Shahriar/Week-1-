//https://cses.fi/problemset/task/2428


#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll countAtMostK(ll a[], ll n, ll k)
{
    map<ll, ll> freq;
    ll l = 0, res = 0;

    for (ll r = 0; r < n; r++)
    {
        freq[a[r]]++;

        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0) freq.erase(a[l]);
            l++;
        }
        res += (r - l + 1);
    }
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    cout << countAtMostK(a, n, k) << endl;
}

int main()
{
    solve();
    return 0;
}

