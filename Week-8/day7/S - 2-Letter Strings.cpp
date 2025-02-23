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

        map<string, int> mp;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < 2; j++)
            {
                for (char c = 'a'; c<= 'k'; c++)
                {
                    if (s[j]== c)
                    {
                        continue;
                    }
                    string ns = s;
                    ns[j] = c;
                    ans += mp[ns];
                }
            }
            mp[s]++;
        }
        cout << ans <<endl;
    }
    return 0;
}
