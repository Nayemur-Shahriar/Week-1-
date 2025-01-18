#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{


    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum%2)cout<< "NO"<<endl;

       else cout<< "YES"<<endl;
    }
    return 0;
}
