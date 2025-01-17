#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (auto& i : v) cin >> i;

        int firstCnt = 0, lastCnt = 0;

        int firstIdx = -1, lastIdx = -1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[0]) firstCnt++;
            if (firstCnt == k)
            {
                firstIdx = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == v[n - 1]) lastCnt++;
            if (lastCnt == k)
            {
                lastIdx = i;
                break;
            }
        }

        if (firstCnt >= k && lastCnt >= k && (firstIdx < lastIdx || v[0] == v[n - 1]))
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
