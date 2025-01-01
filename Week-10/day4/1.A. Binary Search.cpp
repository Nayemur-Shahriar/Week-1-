#include <bits/stdc++.h>
using namespace std;

int main()
{


    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x, l = 0, r = n - 1, mid;
        cin >> x;

        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x == a[mid])
            {
                found = true;
                break;
            }
            else if (x < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (found)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
