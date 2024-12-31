//https://cses.fi/problemset/task/1163

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;

    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }

    set<int> lights = {0, x};
    multiset<int> lengths = {x};

    for (int p : pos)
    {
        auto it = lights.upper_bound(p);

        int right = *it;
        int left = *prev(it);

        lengths.erase(lengths.find(right - left));

        lengths.insert(p - left);
        lengths.insert(right - p);

        lights.insert(p);

        cout << *lengths.rbegin() << " ";
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}
