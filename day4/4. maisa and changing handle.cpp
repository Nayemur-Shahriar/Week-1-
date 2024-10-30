#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   cin >>n;
   
   map<string, string> x, y;
   
   for(int i =1;i <= n;i++)
   {
      string a,b;
      cin>>a>> b;
      
      if(y.find(a) != y.end())
      {
         string s = y[a];
         x[s] = b;
         y.erase(a);
         y[b] = s;
      }
      
      else
      {
         x[a] =b;
         y[b] =a;
      }
   }

   //cout <<y.size()<<endl;
   
   
      cout <<x.size()<<endl;

   for(auto [x,y] : x)
   {
      cout<< x <<" " << y<<endl;
   }

   return 0;
}