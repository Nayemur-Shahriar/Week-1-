#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        reverse(a.begin(),a.end());

        while(!a.empty() and a.back()==0)
        {
            a.pop_back();
        }

        if(a.empty())
        {
            cout<<0<<endl;
            continue;
        }

        ll ans=0;

        reverse(a.begin(),a.end());

        n=a.size();

        for(int i=0; i<n-1; i++)
        {
            if(a[i]==0)
            {
                ans++;
            }
            else
            {
                ans=ans+a[i];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
