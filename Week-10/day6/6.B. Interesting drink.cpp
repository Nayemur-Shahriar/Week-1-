#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    sort(a.begin(), a.end());

    while (m--)
    {
        int k;
        cin >> k;

        int l = 0, r = n;

        while (l < r)
        {
            int mid = l + (r - l) / 2;

            if (a[mid] <= k)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        cout << l << endl;
    }

    return 0;
}
