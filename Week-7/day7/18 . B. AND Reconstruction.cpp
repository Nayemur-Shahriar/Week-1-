#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> b(n - 1), a(n);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }

        a[0] = b[0];
        for (int i = 1; i < n - 1; i++)
        {
            a[i] = b[i - 1] | b[i];
        }
        a[n - 1] = b[n - 2]; //t

        bool valid = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
