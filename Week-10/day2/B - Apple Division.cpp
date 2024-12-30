//https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(int idx, ll* arr, ll sum1, ll sum2, ll N)
{
    if (idx == N)
    {
        return abs(sum1 - sum2);
    }
    ll x = solve(idx + 1, arr, sum1 + arr[idx], sum2, N);
    ll y = solve(idx + 1, arr, sum1, sum2 + arr[idx], N);
    return min(x, y);
}

int main()
{
    ll N;
    cin >> N;
    ll arr[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    ll ans = solve(0, arr, 0, 0, N);
    cout << ans;
}
