#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int fav = v[f - 1];
        int cnt = count(v.begin(), v.end(), fav);

        sort(v.rbegin(), v.rend());
        int rem = cnt;

        for (int i = 0; i < k; i++)
        {
            if (v[i] == fav)
            {
                rem--;
            }
        }

        if (rem == 0)
        {
            cout << "YES" << endl;
        }
        else if (rem == cnt)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "Maybe" << endl;
        }
    }
    return 0;
}

