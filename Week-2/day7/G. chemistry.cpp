#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >>t;
    while(t--) 
    {
        int n,k;
        cin >>n>>k;
        
        string s;
        cin >>s;

        map<char,int> freq;
        
        for(char c :s)
        freq[c]++;

        int cnt = 0;
        for(auto x : freq)
        {
            if(x.second % 2 != 0)
            cnt++;
        }

        int r = n-k;
        
        if ((r%2 ==0 && cnt<= k) || (r%2 ==1 && cnt<= k+1)) 
        {
            cout<< "YES"<< endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
    }
    return 0;
}
