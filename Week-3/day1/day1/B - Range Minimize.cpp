#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
         long long  int a[n];
           
           for(long long int i=0;i<n;i++)
           {
               cin>>a[i];
           }
           
           sort(a,a+n);
           
          long long int v1=a[n-3]-a[0];
          long long int v2=a[n-1]-a[2];
          long long int v3=a[n-2]-a[1];
          
        cout<< min({v1, v2, v3})<< endl; 
     

    }
    // if (s1 > s2) 
    // {
    //     cout<< "YES" << endl;
    // }
    // else 
    // {
    //     cout <<"NO" << endl;
    // }

    return 0;
}
