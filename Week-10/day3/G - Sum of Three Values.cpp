//https://cses.fi/problemset/task/1641


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        long long target = x - arr[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            long long sum = arr[l].first + arr[r].first;
            if (sum == target)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << endl;
                return;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    solve();
    return 0;
}
