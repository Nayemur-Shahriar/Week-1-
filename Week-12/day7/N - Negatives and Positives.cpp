#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v(n);

        ll mini=1e9;
        ll sum=0;
        ll neg=0;

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]<0)
                neg++;

            sum+=abs(v[i]-0);
            mini=min(abs(v[i]-0),mini);
        }

        if(neg%2==0)
            cout<<sum<<endl;
        else
            cout<<sum-mini-mini<<endl;

    }
    return 0;
}

