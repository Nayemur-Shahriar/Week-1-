#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        deque<long long> ans;

        for (int i = 0; i<= __lg(n); i++)
        {
            if ((n >> i) & 1)
            {
                long long val = n - (1LL << i);
                if (val > 0)
                {
                    ans.push_front(val);
                }
            }
        }

        ans.push_back(n);

        cout << ans.size() <<endl;
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout <<endl;
    }

    return 0;
}
