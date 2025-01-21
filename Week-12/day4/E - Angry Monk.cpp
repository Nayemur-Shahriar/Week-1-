
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{


    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(k);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        ll ans = 0;
        for (int i = 0; i < k - 1; ++i)
        {
            if (a[i] == 1)
            {
                ans += 1;
            }
            else
            {
                ans += (ll)(a[i] + a[i] - 1);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}


