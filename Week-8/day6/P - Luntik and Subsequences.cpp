#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;

    while (t--)
    {
        int n, one = 0, zero = 0;
        cin >> n;

        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            if (x == 1) one++;
            if (x == 0) zero++;
        }

        cout << (1LL << zero) * one <<endl;
    }

    return 0;
}

