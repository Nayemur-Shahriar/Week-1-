#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;

        while (x > 0 || y > 0)
        {
            if (y >= 2)
            {
                y = y - 2;
                x = x - 7;
                cnt++;
            }
            else
            {
                if (y == 1)
                {
                    y = y - 1;
                    x = x - 11;
                    cnt++;
                }
                else
                {
                    x = x - 15;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
