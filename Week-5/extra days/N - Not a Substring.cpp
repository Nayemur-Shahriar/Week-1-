#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        if (s == "()")
        {
            cout << "NO\n";
            continue;
        }

        bool check = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == ")(")
            {
                check = true;
                break;
            }
        }

        string ans = "";
        if (check)
        {
            for (int i = 0; i < n; i++) ans += "(";
            for (int i = 0; i < n; i++) ans += ")";
            cout << "YES\n" << ans << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++) ans += "()";
            if (ans == s)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n" << ans << "\n";
            }
        }
    }

    return 0;
}
