#include <bits/stdc++.h>
using namespace std;

int fnction(int n, int m, const string& p)
{
    map<char, int> d;

    for (char c : p)
    {
        d[c]++;
    }

    int miss = 0;

    for (char l = 'A'; l <= 'G'; ++l)
    {
        if (d[l] < m)
        {
            miss += (m -d[l]);
        }
    }

    return miss;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        string p;

        cin >> n >> m >> p;

        cout << fnction(n, m, p) << endl;
    }
    return 0;
}

