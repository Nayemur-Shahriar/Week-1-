#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    int t;
    cin>>t;

    while(t--)
        {
        int n,m,h;
        cin>>n>>m>>h;

        priority_queue<int> p;
        priority_queue<int> q;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            p.push(x);
        }

        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            q.push(x);
        }

        ll r = 0;

        while(!p.empty() && !q.empty())
            {

                ll x= 1LL*q.top()*h;

                if(x>p.top())
            {
                r=r+p.top();
            }
            else
            {
                r=r+x;
            }
            p.pop();
            q.pop();
        }
        cout<<r<<endl;
    }
    return 0;
}
