#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--) 
    {
        string s;
        getline(cin,s); 
        
        stack<int>sml,cap;
        
        for(int i=0; i<s.size();i++)
        {
          if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
          {
              cap.push(i);
          }
          
          if(s[i]>='a' && s[i]<='z' && s[i]!='b')
          {
              sml.push(i);
          }
          
          if(s[i]=='B' && !cap.empty())
          {
             s[cap.top()]='0';
             cap.pop();
          }
          
          if(s[i]=='b' && !sml.empty())
          {
             s[sml.top()]='0';
             sml.pop();
          }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='0')
            {
                cout<<s[i];
            }
           // cout<<endl;
        }
        cout<<endl;
    }    
    
    return 0;
}
