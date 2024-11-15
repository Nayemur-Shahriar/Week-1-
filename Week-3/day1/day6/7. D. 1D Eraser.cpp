#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;


        int l=0;
        int r=s.size()-1;


        int kaj=0;

        while(l<=r)


        {
             if(s[l]=='B')
            {
               l=l+k;
               kaj++;
            }
            else if(s[r]=='B')
            {
               r=r-k;
               kaj++;
            }
            if(s[l]=='W') l++;
            if(s[r]=='W') r--;


        }
        cout<<kaj<<endl;
    }



    return 0;
}
