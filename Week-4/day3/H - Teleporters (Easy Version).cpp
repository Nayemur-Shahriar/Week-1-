#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> ttl(n);

        for (int i = 0; i < n; ++i)
        {
            ttl[i] = i + 1 + a[i];
        }

        sort(ttl.begin(), ttl.end());

        int cnt = 0;

        for(int x : ttl)
        {
            if (c >= x)
            {
                c= c-x;
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
