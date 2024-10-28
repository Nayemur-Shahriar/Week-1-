#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    
    int cnt[26]={0};
    
    int i=0;
    
      for(int i=0;i<s.length();i++)
    {
        cnt[s[i]-'a']++;
    }
    
    
    int flag=0;
   for(int i=0;i<26;i++)
   {
       //cout<<char(i+'a')<<" "<<cnt[i]<<endl;
       
       if(cnt[i]==0)
       {
        cout<<char(i+'a');
        flag=1;
        break;
       }
       


   }

        if(flag==0)
       {
           cout<<"None";
       }
       

    return 0;
}
