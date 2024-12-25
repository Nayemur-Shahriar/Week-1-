#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r <= 3)
        {
            cout << -1 << endl;
            continue;
        }

        if (l % 2 == 0 && l != 2)
        {
            cout << l / 2 << ' ' << l / 2 << endl;
            continue;
        }

        if (r % 2 == 0 && r != 2)
        {
            cout << r / 2 << ' ' << r / 2 << endl;
            continue;
        }

        if (l != r)
        {
            cout << 2 << ' ' << r - 3 << endl;
            continue;
        }

        bool found = false;
        for (int i = 2; i * i <= l; ++i)
        {
            if (l % i == 0)
            {
                cout << i << ' ' << l - i << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
