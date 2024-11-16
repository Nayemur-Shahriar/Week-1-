#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
 {
    int t;
    cin >>t;
    while(t--)
    {
        int n, k, q;
        cin >>n >> k>> q;

        vector<ll> v(n);

        for(int i = 0; i< n; i++)
        {
            cin >>v[i];
        }

        ll ans = 0, len = 0;

        for(int i = 0; i< n; i++)
        {
            if(v[i]<= q)
            {
                len++;
            }
            else
            {
                if(len>= k)
                {
                    ll rem = len-k+ 1;
                     ans = ans +(rem *(rem +1)/ 2);
                }
                len = 0;
            }
        }

        if(len >= k)
        {
            ll rem = len-k+1;
            ans= ans+(rem *(rem+1)/ 2);
        }

        cout<<ans<< endl;
    }
    return 0;
}
