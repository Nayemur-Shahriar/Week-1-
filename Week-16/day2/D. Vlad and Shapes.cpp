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

        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;

            for (int j = 0; j < n; j++)
            {
                if (s[i][j] == '1')
                {
                    cnt++;
                }
            }

            if (cnt == 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
    }

    return 0;
}
