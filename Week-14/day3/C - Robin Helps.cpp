#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int s = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (s > 0)
                {
                    s--;
                    cnt++;
                }
            }
            else if (a[i] >= k)
            {
                s += a[i];
            }
        }
        cout << cnt <<endl;
    }

    return 0;
}
