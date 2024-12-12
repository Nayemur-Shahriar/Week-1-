#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll OR = 0;
        for(int i = 0; i < n; i++)
        {
            OR |= a[i];
        }

        cout << OR <<endl;
    }
    return 0;
}
