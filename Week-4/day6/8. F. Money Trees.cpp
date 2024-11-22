#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n),h(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        ll mxLen=0;
        ll sum=0;
        ll len =0;

        for (ll r = 0, l = 0; r < n; r++)
        {

            if (r == 0 || h[r - 1] % h[r] == 0)
            {
                sum += a[r];
                len++;

                while (sum > k)
                {
                    sum -= a[l];
                    len--;
                    l++;
                }

                mxLen = max(mxLen, len);
            }
            else
            {

                sum = a[r];
                len = 1;
                l = r;

                if (sum <= k)
                {
                    mxLen = max(mxLen,len);
                }
            }
        }

        cout<< mxLen << endl;
    }

    return 0;
}
