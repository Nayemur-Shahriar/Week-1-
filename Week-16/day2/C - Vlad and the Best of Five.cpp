#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int b=0,c=0;

        for( char ch:s)
        {
            if(ch=='B') b++;
            else c++;
        }

        if(b>c) cout<<"B"<<endl;
        else cout<<"A"<<endl;
    }

    return 0;
}

