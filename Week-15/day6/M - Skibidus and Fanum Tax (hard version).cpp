#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)

    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        sort(b.begin(), b.end());

        long long cur = LLONG_MIN;
        bool flag = true;

        for (long long ai : a)
        {
            auto it = lower_bound(b.begin(), b.end(), cur + ai);

            long long cand1, cand2;

            if (ai >= cur)
            {
                cand1 = ai;
            }
            else
            {
                cand1 = LLONG_MAX;
            }

            if (it != b.end())
            {
                cand2 = (*it-ai);
            }
            else
            {
                cand2 = LLONG_MAX;
            }

            if (cand1 == LLONG_MAX && cand2 == LLONG_MAX)
            {
                flag = false;
                break;
            }

            cur = min(cand1, cand2);
        }

        if (flag)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
