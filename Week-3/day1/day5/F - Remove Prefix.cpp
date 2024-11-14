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


         vector<int>v(n);
         map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];

            mp[v[i]]++;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(n-i==mp.size())
            {
                break;
            }
            else
            {
                // v.erase(v.begin()+i);
                 cnt++;
                 mp[v[i]]--;


                 if(mp[v[i]]==0)mp.erase(v[i]);
            }



        }

 cout<<cnt<<endl;

    }

return 0;
}
