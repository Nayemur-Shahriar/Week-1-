#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int diff = r - l;
        double temp = (-1 + sqrt(1 + 8.0 * diff)) / 2.0;

        int ans = (int)temp;

        cout << ans + 1 << endl;
    }
    return 0;
}
