#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> p(n + 1);
        for (long i = 1; i <= n; i++)
        {
            cin >> p[i];
        }

        long minInv = 3;
        for (long i = 1; i <= n; i++)
        {
            if (p[i] == 0) continue;
            long cnt = 0, cur = i;
            while (p[cur] != 0)
            {
                cnt++;
                long next = p[cur];
                p[cur] = 0;
                cur = next;
            }
            if (cnt > 0)
            {
                minInv = min(minInv, cnt);
            }
        }

        cout << minInv <<endl;
    }

    return 0;
}
