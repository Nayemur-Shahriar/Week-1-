#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> mack(n);
        for (int i = 0; i < n; i++)
        {
            cin >> mack[i];
        }
        sort(mack.begin(), mack.end());
        cout << mack[n / 2] << endl;
    }
}

int main()
{

    solve();
    return 0;
}
