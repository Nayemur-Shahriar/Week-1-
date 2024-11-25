#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

   long long int t;
    cin>>t;

    while(t--)
    {
        string s;

       long long int n;
        cin>>n>>s;
        int flag = 0;
        int l = s.length();

        for(int i = 0; i < l / 2; i++) {
            if(s[i] == s[l - i - 1])continue;
            if(s[i] > s[l - i - 1]) {
                flag = 1;
            }
            else
                flag = 0;
        }

        if(flag == 0)
        {
            cout<<s<<endl;
        }
        else
            {
                string r=s;

                   reverse(r.begin(), r.end());

                  cout<<r<<s<<endl;


            }





    }



    return 0;
}

