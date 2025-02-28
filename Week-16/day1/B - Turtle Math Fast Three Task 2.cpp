#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        ll sum=0;
        int k=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];

            if(a[i]%3==1)
                k=1;

        }

        if(sum%3==0)
            cout<<0<<endl;
        else if(sum%3==2)
            cout<<1<<endl;
        else if(k==1)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }

}
