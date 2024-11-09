#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    
    while(t--)
    {
       
    int n, m, q;
    cin>>n >>m >>q;
    
    vector<int>t(m);
    
    for(int i = 0; i< m; i++)
    {
        cin>> t[i];
    }

    sort(t.begin(),t.end());

    while(q--)
    {
        int dvd;
        cin >>dvd;

        if(dvd< t[0])
        {
            cout<< t[0]-1<<endl;
            continue;
        }

        if(dvd> t[m-1])
        {
            cout<< n-t[m-1] <<endl;
            continue;
        }

        auto x = lower_bound(t.begin(),t.end(), dvd);
        auto y = x;
        y--;

        int left = *y, right = *x;
        
        int mid = (right+left)/2;
        
        cout << min(abs(mid-left), abs(mid-right))<<endl;
    }
   }
    return 0;
}