#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        vector<int> arr(n + 1), prefixSum(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            int k;
            cin >> k;

            int l = 1, r = n, mid;
            while (l < r)
            {
                mid = (l + r) / 2;
                if (k <= prefixSum[mid])
                    r = mid;
                else
                    l = mid + 1;
            }

            cout << r << endl;
        }
    }

    return 0;
}
