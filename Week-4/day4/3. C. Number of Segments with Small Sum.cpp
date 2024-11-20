#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;

    cin >> n >>k;

    vector<int>v(n);

    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int l = 0, r = 0;
    long long sum = 0, ans = 0;

    while(r< n)
    {
        sum =  sum+v[r];

        if(sum <= k)
        {
            ans = ans + (r-l + 1);
        }
        else
        {
            while (sum > k && l <= r)
            {
                sum = sum-v[l];
                l++;
            }
            if(sum <= k)
            {
                ans= ans+(r-l + 1);
            }
        }
        r++;
    }

    cout<<ans<<endl;

    return 0;
}
