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

        vector<int>a(n);

        for(int i=0;i<n;i++) cin>>a[i];

       // for(int i=0;i<n;i++) cout<<a[i];

        //cout<<endl;


            vector<int>b;
            vector<int>c;


        for(int x:a)
        {
            if(x<0) b.push_back(x);
            else c.push_back(x);

        }

        int sumneg=0,sumpos=0;

        for(int i:b)
        {
           //cout<<i<<" ";

           sumneg=sumneg+i;

        }

       // cout<<endl;
        for(int x:c)
        {
             //cout<<x<<" ";

             sumpos=sumpos+x;

        }

        cout<<abs(sumneg)+sumpos<<endl;


    }


    return 0;
}

