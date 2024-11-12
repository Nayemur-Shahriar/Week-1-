#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,m;
   
   cin >>a>>m;
   
   vector<int>x(a),y(m);
   
   for(int i = 0;i< a;i++)
   {
      cin >>x[i];
   }

   for(int i =0;i< m;i++)
   {
      cin >>y[i];
   }

   int l =0, r =0, cnt=0;
   
   while(r< m) 
   {
      if (l<a && x[l]<y[r])
      {
         cnt++, l++;
      }
      else
      {
         cout <<cnt << " ";
         r++;
      }
   }

   return 0;
}