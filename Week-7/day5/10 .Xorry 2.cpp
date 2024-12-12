#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    int a = 1, b = 0, count = 0;
    while (a * 2 <= n)
    {
        a *= 2;
        count++;
    }

    int ans = 1;
    bool check = false;

    for (int i = count - 1; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            b = b | (1 << i);
            check = true;
        }
        else
        {
            if (check) ans = ans*2;
        }
    }
    cout << ans << endl;
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
