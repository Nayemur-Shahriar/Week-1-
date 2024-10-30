#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >>t;
    
    while(t--) 
    {
        int n;
        cin >> n;
        
        vector<string> p1(n), p2(n), p3(n);
        map<string, int> cnt;
        
        for(int i = 0; i< n; i++)
        {
            cin >> p1[i];
            cnt[p1[i]] ++;
        }
        
        for(int i = 0; i< n; i++)
        {
            cin >> p2[i];
            cnt[p2[i]] ++;
        }
        
        for(int i =0; i < n; i++)
        {
            cin >> p3[i];
            cnt[p3[i]] ++;
        }

        int s1 = 0, s2 = 0, s3 = 0;

        for( auto word : p1)
        {
            if(cnt[word]== 1) 
            {
                s1 = s1 +3;
            } 
            
            else if (cnt[word] == 2) 
            {
                s1 = s1 +1;
            }
        }

        for(auto word : p2) 
        {
            if(cnt[word]== 1)
            {
                s2 = s2 +3;
            }
            else if(cnt[word] == 2)
            {
                s2 = s2 +1;
            }
        }

        for(auto word : p3) 
        {
            if(cnt[word]== 1) 
            {
                s3 = s3 +3;
            }
            else if(cnt[word] == 2)
            {
                s3 = s3 +1;
            }
        }

        cout<< s1<< " " <<s2<< " "<<s3 << endl;
    }
    
    return 0;
}
