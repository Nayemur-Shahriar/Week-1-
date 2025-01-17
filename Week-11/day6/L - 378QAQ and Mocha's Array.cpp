#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int f = a[0];

        vector<int> remain;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % f != 0)
            {
                remain.push_back(a[i]);
            }
        }

        if (remain.empty())
        {
            cout << "Yes\n";
            continue;
        }

        int s = remain[0];

        bool valid = true;
        for (int i = 0; i < (int)remain.size(); i++)
        {
            if (remain[i] % s != 0)
            {
                valid = false;
                break;
            }
        }

        cout << (valid ? "Yes" : "No") <<endl;
    }

    return 0;
}

