#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    ios;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
        ll n, max_gcd = 1,sum=0;
        cin>>n;
        vector < ll > v(n,0), pre(n,0);
        for(ll i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        pre[0] = v[0];
        for(ll i = 1; i < n ; i++) {
            pre[i] = v[i]+pre[i-1];
        }
        sum = pre[n-1];
        for(ll i = 0 ; i < (n-1) ; i++) {
            max_gcd = max(__gcd(pre[i],sum-pre[i]),max_gcd);
        }
        cout<<max_gcd<<endl;
    }

    return 0;
 }
