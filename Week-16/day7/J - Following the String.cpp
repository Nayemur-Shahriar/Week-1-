#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;

        //

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        for(int i=0; i<n; i++)
        {
            cout<<(char)(mp[a[i]]+97);
            mp[a[i]]++;

        }
        cout<<endl;

    }

    return 0;
}