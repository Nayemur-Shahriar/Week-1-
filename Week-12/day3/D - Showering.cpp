#include <iostream>
#include <vector>
using namespace std;

bool can_shower(int n, int s, int m, vector<pair<int, int>>& intervals)
{
    if (intervals[0].first >= s)
    return true;

    for (int i = 1; i < n; ++i)
    {
        if (intervals[i].first - intervals[i-1].second >= s)
        {
            return true;
        }
    }

    if (m - intervals[n-1].second >= s) return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        if (can_shower(n, s, m, intervals))
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
