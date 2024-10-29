#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    vector<int>cards(n);
    
    for (int i =0; i< n; i++) 
    {
        cin >>cards[i];
    }
    
    int l = 0, r= n-1;
    int sereja_score = 0, dima_score = 0;
    int cnt = 0; 

    while(l<=r)
    {
        int x;
        
        if(cards[l] > cards[r]) 
        {
            x = cards[l];
            l++;
        }
        else
        {
            x = cards[r];
            r--;
        }

        if(cnt % 2 == 0) 
        { 
            sereja_score =sereja_score + x;
        }
        else 
        {
            dima_score = dima_score + x;
        }

        cnt++; 
    }
    
    cout <<sereja_score <<" " <<dima_score << endl;
    return 0;
}