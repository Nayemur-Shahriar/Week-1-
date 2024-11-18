#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
           int n;
        cin>>n;
        char s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }



        int cnt1=0,cnt0=0,i=0;

        while(i<n)
        {
             if(s[i]=='0')
            {
                cnt0++;

                 while(i<n && s[i]=='0')
                 {
                     i++;
                 }

            }
            else
                if(s[i]=='1')

                {
                    cnt1++;

                 while(i<n && s[i]=='1')
                 {
                     i++;
                 }

            }



        }

        cout<<min(cnt0,cnt1)<<endl;


    }


    return 0;
}
