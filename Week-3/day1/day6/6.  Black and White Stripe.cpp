#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    string s;
    cin>>s;
    
    for(int i=0;i<k;i++)
    {
        if(s[i]=='W') cnt++;
    }
    
    int ans=cnt;
    
      for(int i=k;i<n;i++)
    {
        if(s[i]=='W') cnt++;
        if(s[i-k]=='W') cnt--;
    ans=min(ans,cnt);
    }
    
    cout<<ans<<endl;
}
    return 0;
}