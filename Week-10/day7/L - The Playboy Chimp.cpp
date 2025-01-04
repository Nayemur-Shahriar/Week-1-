#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int t;
    cin >> t;

    while (t--)
    {
        int h;
        cin >> h;

        int below = -1, above = -1;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] < h)
            {
                below = v[i];
            }
            else if (v[i] > h)
            {
                above = v[i];
                break;
            }
        }

        if (below != -1)
            cout << below << " ";
        else
            cout << "X ";

        if (above != -1)
            cout << above <<endl;
        else
            cout << "X"<<endl;
    }

    return 0;
}
