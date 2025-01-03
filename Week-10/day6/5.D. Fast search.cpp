#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int k;
    cin >> k;

    while (k--)
    {
        int x, y;
        cin >> x >> y;

        int l = 0, r = n;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] >= x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        int leftIndex = l;

        l = 0, r = n;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] > y)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        int rightIndex = l;

        cout << (rightIndex - leftIndex) << " ";
    }
    cout << endl;

    return 0;
}
