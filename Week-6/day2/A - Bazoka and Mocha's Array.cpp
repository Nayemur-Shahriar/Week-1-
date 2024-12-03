#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i]);
    }

    for (int start = 0; start < n; start++)
    {
        bool is_sorted = true;
        int last = -1e6;
        for (int i = start; i < start + n; i++)
        {
            if (a[i] < last)
            {
                is_sorted = false;
                break;
            }
            last = a[i];
        }
        if (is_sorted)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int z= 0; z < t; z++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (solve(a))
        {
            cout << "Yes"<<endl;
        }
        else
        {
            cout << "No"<<endl;
        }
    }
    return 0;
}
