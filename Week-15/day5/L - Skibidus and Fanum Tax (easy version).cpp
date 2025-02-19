#include <bits/stdc++.h>

using namespace std;

bool canSort(int n,vector<int>& a, int bVal)
{
    if (n == 0) return true;

    int prev = min(a[0], bVal - a[0]);

    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int x = current;
        int y = bVal - current;

        vector<int> v;

        if (x >= prev) v.push_back(x);
        if (y >= prev) v.push_back(y);

        if (v.empty()) return false;

        prev = *min_element(v.begin(),v.end());
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int bVal = b[0];

        if (canSort(n,a,bVal))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
