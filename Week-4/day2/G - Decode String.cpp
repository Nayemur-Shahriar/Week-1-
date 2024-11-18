#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
        {
            int n;
            cin>>n;
        string s;
        cin >>s;

        vector<char>v;

        for(int i =n- 1; i >= 0; i--)
            {

              if(s[i]=='0' && i >= 2)

               {

                  int x = s[i-1] -'0';
                  int y = s[i-2] -'0';

                  int z = y*10+x;
                  char c = z+96;

                  v.push_back(c);

                  i=i-2;
               }


              else

               {

                  int x = s[i]-'0';
                  char c = x+96;

                  v.push_back(c);
               }
        }

        reverse(v.begin(),v.end());

        for(char c : v) cout<<c;
        cout<<endl;
    }

    return 0;
}
