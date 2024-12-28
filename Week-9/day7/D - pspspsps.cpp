#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == 's') s[0] = '.';
        if (s.back() == 'p') s.back() = '.';

        bool found_p = false;
        bool found_s = false;

        for (const auto c : s)
        {
            if (c == 'p') found_p = true;
            if (c == 's') found_s = true;
        }

        if (found_p && found_s)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
    }

    return 0;
}
