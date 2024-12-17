#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        vector<long long> b(q);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }

        vector<int> arr;

        for (auto i : b)
        {
            if (arr.empty() || arr.back() > i)
            {
                arr.push_back(i);
            }
        }

        for (auto i : arr)
        {
            long long x = pow(2, i);
            long long v = pow(2, i - 1);

            for (auto &j : a)
            {
                if (j % x == 0)
                {
                    j += v;
                }
            }
        }

        for (auto i : a)
        {
            cout << i << ' ';
        }
        cout <<endl;
    }

    return 0;
}
