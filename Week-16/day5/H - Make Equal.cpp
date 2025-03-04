#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0)
    {
        cout << "NO"<<endl;
        return;
    }

    long long target = sum / n;
    long long excess = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > target)
        {
            excess =excess + (a[i]-target);
        }
    }

    if (excess <= sum - target * n)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
}

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
