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

        int sz = n * (n - 1)/ 2;

        vector<int> b(sz);

        for (int i = 0; i < sz; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a;

        int step = n - 1;
        int idx = 0;

        while (step > 0)
        {
            a.push_back(b[idx]);
            idx += step;
            step--;
        }

        a.push_back(b.back());

        for (auto val :a)
        {
            cout<<val << " ";
        }
        cout <<endl;
    }
    return 0;
}
