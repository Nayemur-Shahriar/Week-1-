#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin >>n;
   map<pair<string,string>,bool> mp;
   
   for(int i =1;i<= n;i++)
   {
      string x,y;
      cin >>x >>y;
      mp[{x,y}]= true;
   }

   cout<<mp.size()<<endl;
   
   return 0;
}