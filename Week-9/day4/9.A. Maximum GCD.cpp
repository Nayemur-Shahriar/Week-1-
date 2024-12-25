
#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main()
{
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n%2!=0)
        {
            cout<<(n-1)/2<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
    }

    return 0;
}
