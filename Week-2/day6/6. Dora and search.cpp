#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    
    int t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin>> n;
        
        ll arr[n];
        set<ll> s;
        
        for(ll i = 0; i< n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        ll l = 0, r = n-1;
        
        while(r-l > 1) 
        {
            ll mn = *s.begin();
            ll mx = *s.rbegin();
            
            if(arr[l] != mn && arr[l] != mx && arr[r] != mn && arr[r] != mx)
            {
                break;
            }
            
            if(arr[l] == mn || arr[l] == mx) 
            {
                s.erase(arr[l]);
                l++;
            }
            if(arr[r] == mn || arr[r] == mx) 
            {
                s.erase(arr[r]);
                r--;
            }
        }

        if(r-l >1)
        {
            cout << l+1 << ' ' << r+1 <<endl;
        } 
        else
        {
            cout<< -1 <<endl;
        }
    }
    return 0;
}
