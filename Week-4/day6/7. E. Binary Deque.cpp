#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n, req;
        cin >> n >> req;

        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < req)
        {
            cout << -1 <<endl;
            continue;
        }

        vector<int> v(n+1,n);

        int last = n;
        for (int i = n - 1; i >= 0; i--)
        {
            v[i] = last;
            if (a[i] == 1)
            {
                last = i;
            }
        }

        int ans = INT_MAX, curr = 0, l = 0;

        queue<int> q;

        for (int i = 0; i < n; i++)
        {
            q.push(a[i]);
            curr += a[i];

            while (!q.empty() && curr > req)
            {
                curr -= q.front();
                q.pop();
                l++;
            }

            if (curr == req)
            {
                ans = min(ans, l + (n - v[i]));
            }
        }

        cout << ans <<endl;
    }

    return 0;
}
