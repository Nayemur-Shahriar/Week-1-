#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, person = 1;
   cin >>n;
   
   set<pair<int,int>>s;
   
   multiset<pair<int,int>> ml;
   vector<int>rslt;
   
   for(int i = 1;i<= n;i++)
   {
      int x;
      cin >>x;
      
      if(x==1)
      {
         int tk;
         cin >> tk;
         
         s.insert({person,tk});
         
         ml.insert({tk,-person});
         
         person++;
      }
      
      else if(x == 2)
      {
         int pos = s.begin()->first;
         int tk = s.begin()->second;
         
         rslt.push_back(pos);
         s.erase(s.begin());
         ml.erase({tk,-pos});
      }
      
      else
      {
         int pos =-ml.rbegin()->second;
         int tk =ml.rbegin()->first;
         
         rslt.push_back(pos);
         
         ml.erase(--ml.end());
         s.erase({pos,tk});
      }
   }

   for(auto val :rslt)
   {
      cout << val<< " ";
   }
   cout << endl;

   return 0;
}