#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{


    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 2)
        {
            cout << "NO\n";

        }

        else
        {
            ll v = n / 2;

        cout << "YES\n";

        for (ll i = 1; i <= v; i++)
        {
            if (i % 2)
                cout << "AA";
            else
                cout << "BB";
        }

        cout << endl;
        }
    }

    return 0;
}
