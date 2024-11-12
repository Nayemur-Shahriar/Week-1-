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
       
       string s;
       cin>>s;
       
       int l=0;
       int r=n-1;
       int len=n;
       
       
       while(l<=r)
       {
           if(s[l]==s[r]) break;
           else 
           {
               len=len-2;
               l++;
               r--;
           }
       }
       cout<<len<<endl;
   }
   

    return 0;
}