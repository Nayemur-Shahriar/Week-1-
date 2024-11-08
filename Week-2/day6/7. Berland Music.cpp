#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        
        for(auto &it:p)
        cin>>it;
         
        string s;
        cin >>s;

        map<int,int> like, dislike;

        for(int i = 0; i<n; i++)
        {
            
            if(s[i] =='0')
            {
                dislike[p[i]] = i;
            }
            else
            {
                like[p[i]] = i;
            }
        }

        int num = 1;
    
        for(auto it : dislike)
        {
            p[it.second] = num++;
        }

        for(auto it : like) 
        {
            p[it.second] = num++;
        }

        

        for(int i =0; i< n; i++)
        {
            cout<< p[i]<< " ";
        }
        cout<< endl;
    }

    return 0;
}
