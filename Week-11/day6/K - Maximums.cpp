#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n, m = 0, a;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        if(i == 0)
        {
            cout<<a<<" ";
            m = a;
        }
        else
        {
            cout<<a+m<<" ";
            m = max(m,(a+m));
        }
    }
    cout<<endl;

    return 0;
}

