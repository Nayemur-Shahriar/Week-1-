#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{


    ll t;

    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string s1;
        cin >> s1;
        vector<ll> change(n);

        ll val = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s1[i] == 'L')
            {
                val += i;
                change[i] = (n - 1 - i) - i;
            }
            else
            {
                val += n - 1 - i;
                change[i] = i - (n - 1 - i);
            }
        }

        sort(change.begin(), change.end());

        for (ll i = n - 1; i >= 0; i--)
        {
            if (change[i] > 0)
            {
                  val += change[i];
            }


            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
