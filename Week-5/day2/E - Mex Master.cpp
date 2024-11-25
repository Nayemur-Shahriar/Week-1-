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

        vector<int>a(n);

                int z=0,nz=0,ans;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]==0) z++;
            else nz++;
        }

        if(z==0) ans=0;
        else
            {
                if(nz>=z-1)
                {
                    ans=0;
                }
                else
                {

                    sort(a.begin(),a.end());

                    int mx=a.back();

                    //cout<<mx;
                   // int mx=max_element(a.begin(),a.end());

                   if(mx==1) ans=2;
                   else ans=1;
                }
            }






            cout<<ans<<endl;



    }



    return 0;
}

