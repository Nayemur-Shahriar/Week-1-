#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll>vec(n);

        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        string s;
        cin >> s;

        vector<ll>ps(n+1,0);

        for (int i=1; i<=n; i++)
        {
            ps[i]=ps[i-1]+vec[i-1];
        }

        ll i=0,j=n-1,tot=0;

        while (i<=j)
        {
            while (i<n)
            {
                if (s[i]=='L') break;
                i++;
            }

            if (i==n) break;

            while (j>=0)
            {
                if (s[j]=='R') break;
                j--;
            }

            if (j==-1) break;
            if (j<i) break;

            tot+=ps[j+1]-ps[i];
            i++,j--;
        }
        cout <<tot <<endl;
    }
    return 0;
}
