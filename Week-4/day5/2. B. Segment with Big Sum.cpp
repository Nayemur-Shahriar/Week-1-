#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   long long k;
   cin >>n >>k;

   vector<int> v(n);

   for(int i = 0;i < n;i++)
   {
      cin >>v[i];
   }

   int l = 0;
   int r =0;
   int ans = INT_MAX;

   long long sum =0;

   while(r<n)
   {
      sum =sum + v[r];

      while(sum >=k)
      {
         ans = min(ans, r-l + 1);
         sum = sum-v[l];
         l++;
      }

      r++;
   }

   if(ans==INT_MAX)   cout <<-1<<endl;
    else    cout <<ans <<endl;


   return 0;
}
