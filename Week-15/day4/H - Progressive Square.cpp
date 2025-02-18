#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        vector<long long> v(n * n);

        long long mn = 1e15;

        for (long long i = 0; i < n * n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        vector<long long> ans;

        for (long long i = 0; i < n; i++)
        {
            long long x = mn + i * a;

            for (long long j = 0; j< n; j++)
            {
                ans.push_back(x);
                x += b;
            }
        }

        sort(v.begin(), v.end());
        sort(ans.begin(), ans.end());

        if (v == ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }



    return 0;
}

