#include<bits/stdc++.h>
#define ll   long long

using namespace std;

int main()
{
    int n, k, ans = 0, a = 0, b = 0, x = 0, y = 0;

    while (cin >> n)
    {
        ans = a = b = x = y = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> k;

            if (k == 1)
            {
                if (x == 0) a = 0;
                ++a;
                x = 1;
                y = 0;
            }
            else
            {
                if (y == 0) b = 0;
                ++b;
                y = 1;
                x = 0;
            }

            ans = max(ans, min(a, b));
        }

        cout << ans * 2 << endl;
    }

    return 0;
}
