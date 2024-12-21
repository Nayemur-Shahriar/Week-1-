#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll minCount = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1] and arr[i] > 0)
        {
            arr[i] /= 2;
            minCount++;
        }

        if (arr[i] == arr[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << minCount << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}
