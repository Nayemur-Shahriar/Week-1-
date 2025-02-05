#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i / 2 + j / 2) % 2 == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
            cout <<endl;
        }
    }

}
