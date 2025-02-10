#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        long long arr[n+10],sum=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        if(n==1 || n==2)
        {
            cout<<-1<<endl;
            continue;
        }

        long long l=0,r=1e18,ans=-1;

        while(l<=r)
        {

            long long mid = (l + r) / 2;

            long long avg=(mid+sum+n-1)/n;
            long long half;

            if(avg%2==0)
            {
                half=avg/2;
            }
            else
            {
                half=(avg+1)/2;
            }

            long long cnt=0;

            for(int i=1; i<=n; i++)
            {
                if(arr[i]<half)
                {
                    cnt++;
                }
            }

            long long need=n/2;

            if(need<cnt && n%2==0)
            {
                ans=mid;
                r=mid-1;
            }
            else if(need+1<=cnt)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}
