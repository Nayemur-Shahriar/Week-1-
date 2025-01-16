#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> v(n);
        for (int &x : v)
        {
            cin >> x;
        }

        map<int, int> mp;

        int mn = 0, cnt = 0;
        for (int i = 0; i < d; i++)
        {
            if (mp[v[i]] == 0)
            {
                cnt++;
            }
            mp[v[i]]++;
        }
        mn = cnt;
        for (int i = d; i < n; i++)
        {
            mp[v[i - d]]--;
            if (mp[v[i - d]] == 0) cnt--;
            if (mp[v[i]] == 0) cnt++;
            mp[v[i]]++;
            mn = min(mn, cnt);
        }
        cout << mn <<endl;
    }
    return 0;
}
