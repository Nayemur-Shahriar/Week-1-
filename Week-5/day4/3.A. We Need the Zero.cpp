#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll xr=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }


        for(int i=0;i<n;i++)
        {

            xr=xr^a[i];
        }
        for(int i=0;i<n;i++)
        {

            a[i]=a[i]^xr;
        }

        ll yr=0;

        for(int i=0;i<n;i++)
        {
            yr=yr^a[i];
        }

        if(yr==0) cout<<xr<<endl;
        else cout<<-1<<endl;


    }


    return 0;
}

