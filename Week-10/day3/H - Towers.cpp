//https://cses.fi/problemset/result/11611178/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> cubes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cubes[i];
    }

    multiset<int> towers;

    for (int x : cubes)
    {
        auto it = towers.upper_bound(x);
        if (it != towers.end())
        {
            towers.erase(it);
        }
        towers.insert(x);
    }

    cout << towers.size() << endl;
}

int main()
{
    solve();
    return 0;
}
