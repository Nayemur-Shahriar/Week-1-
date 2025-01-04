#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int low = l - a[i];
            int high = r - a[i];

            // Manual binary search for the first index >= low
            int left = i + 1, right = n - 1, lowerIndex = n;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (a[mid] >= low)
                {
                    lowerIndex = mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            left = i + 1, right = n - 1;
            int upperIndex = -1;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (a[mid] <= high)
                {
                    upperIndex = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            if (lowerIndex <= upperIndex)
            {
                count += (upperIndex - lowerIndex + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}
