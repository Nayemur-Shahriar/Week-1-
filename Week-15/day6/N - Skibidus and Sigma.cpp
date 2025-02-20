#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<long long, long long>> v;

        long long cnt = 0;

        for (int i = 0; i < n; i++)
        {
            long long s = 0, cnt2 = 0;

            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;

                s += x;
                cnt2 += s;
            }
            v.push_back({s,cnt2});

            cnt += cnt2;
        }

        sort(v.rbegin(),v.rend());

        long long xtra = 0;

        for (int i = 0; i< n; i++)
        {
            long long s = v[i].first;

            xtra += (n - 1 - i) * s;
        }

        cout << cnt + xtra*m <<endl;
    }

    return 0;
}
