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
        for (int i = 1, cur = 1; ; i++, cur = cur * 2 + 2)
        {
            if (cur >= n)
            {
                cout << i <<endl;
                break;
            }
        }
    }

    return 0;
}
