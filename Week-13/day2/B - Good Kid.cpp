

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

            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }

            sort(a,a+n);

            a[0]=a[0]+1;

            long long mul=1;

            for(int i=0;i<n;i++)
            {
                mul=mul*a[i];
            }

            cout<<mul<<endl;



    }



    return 0;
}
