#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    
    while(t--)
    {
        int n;
        cin >>n;
        
        vector<int>cards(n);
        
        for(int i =0; i<n; i++)
        {
            cin >>cards[i];
        }

        priority_queue<int> pq;
        
        long long cnt = 0;

       for(int i = 0; i < n; i++) 
       {
            if(cards[i] > 0) 
            {
                pq.push(cards[i]);
            }
            
            else if (cards[i] == 0) 
            {
                if(!pq.empty())
                {
                    cnt = cnt+pq.top();
                    pq.pop();
                }
            }
        }

        cout <<cnt <<endl;
    }

    return 0;
}
