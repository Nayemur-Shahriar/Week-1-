#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        string s;
        cin >> s;

        int cnt = (s[0] == '@');

        for (int i = 1; i < a; i++)
        {
            if (s[i] == '*' && s[i - 1] == '*')
                break;

            if (s[i] == '@')
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
