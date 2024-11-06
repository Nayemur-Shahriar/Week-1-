#include <bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >>t;
   
   while(t--)
   {
      int n,m;
      cin>> n>> m;
      
      map<int,set<int>> mp;
      
      for(int i = 1;i <= n;i++)
      {
         int x;
         cin >> x;
         mp[x].insert(i);
      }

      for(int i = 1;i<= m;i++)
      {
         int l,r;
         
         cin >>l>>r;
         
         if((mp.find(l) ==mp.end()) ||(mp.find(r) ==mp.end()))
         {
            cout << "NO" << '\n';
         }
         else
         {
            int a1, z1;
            
            a1 = *mp[l].begin();
            z1 = *mp[r].rbegin();
            
            if(a1<z1)
            {
               cout<<"YES"<<endl;
            }
            else
            {
               cout<<"NO"<<endl;
            }
         }
      }
   }

   return 0;
}