#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

       cout<<((n / 4) + (n % 4) / 2)<<endl;
    }


    return 0;
}

