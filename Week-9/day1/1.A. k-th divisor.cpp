#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>d;

    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            d.push_back(i);

            if((n/i)!=i)
            {
                d.push_back(n/i);
            }
        }
    }

    sort(d.begin(),d.end());

    if(d.size()<k) cout<<-1<<endl;
    else cout<<d[k-1]<<endl;

    return 0;
}

