#include <bits/stdc++.h>
using namespace std;

int main()
{


    long t;
    cin >> t;

    while (t--)
    {
        long n, m, k;
        cin >> n >> m >> k;

        vector<long> b(n), c(m);

        for (long &x : b) cin >> x;
        for (long &x : c) cin >> x;

        long total = 0;

        for (int p = 0; p < n; p++)
        {
            for (int q = 0; q < m; q++)
            {
                if (b[p] + c[q] <= k)
                {
                    ++total;
                }
            }
        }

        cout << total <<endl;
    }

    return 0;
}
