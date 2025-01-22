#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n == 3)
        {
            cout << "NO" << endl;
            continue;
        }

        if (n % 2 != 0)
        {
            cout << "YES" << endl;
            ll k = (n - 1) / 2;
            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                if (flag)
                {
                    cout << k - 1 << " ";
                    flag = false;
                }
                else
                {
                    cout << -k << " ";
                    flag = true;
                }
            }
        }
        else
        {
            cout << "YES" << endl;
            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                if (flag)
                {
                    cout << 1 << " ";
                    flag = false;
                }
                else
                {
                    cout << -1 << " ";
                    flag = true;
                }
            }
        }

        cout << endl;
    }

    return 0;
}
