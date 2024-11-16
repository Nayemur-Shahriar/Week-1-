#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

       int a[n];
      long long int sum=0;

       for(int i=0;i<n;i++)
       {
              cin>>a[i];
              sum=sum+abs(a[i]);
       }



        int l=0;
        int r=n-1;


        int kaj=0;

        int ab=1;

        while(l<=r)


        {
             if(a[l]<1 && ab==-1)
            {

            }
            else if(a[l]<0)
            {
              kaj++;
              ab=-1;
            }
            else
            {
                ab=1;
            }
            l++;
        }

        cout<<sum<<" "<<kaj<<endl;
    }



    return 0;
}
