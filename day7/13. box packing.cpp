#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    ll n, a;
    
    map<int, int> mp;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }

    ll ans = 0;
    for (const auto &pair : mp)
    {
        ll count = pair.second; 
        ans = max(ans, count);
    }

    cout << ans << endl;
    
    return 0;
}
