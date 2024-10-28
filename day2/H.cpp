#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int n;
    cin>>n;
    
    long long a, sum = 0, min_odd = INT_MAX;
    
    for(int i = 1;i<=n; i++)
    {
        cin>>a;
        
        if(a%2!=0)
        {
            min_odd = min(a,min_odd);
        }
        sum =sum+a;
    }

    if(sum%2!=0)
    {
        cout<<sum-min_odd<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    return 0;
}