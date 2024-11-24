#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T ;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        bool flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] and b[i] != c[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

}
