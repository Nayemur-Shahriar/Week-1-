#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;
        int rem1 = 0, rem2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];

            if (a[i] % 3 == 1) rem1++;
            else if (a[i] % 3 == 2) rem2++;
        }


        int rem = sum % 3;
        if (rem == 0)
        {
            cout << 0 << endl;
        }
        else if (rem == 1)
        {
            if (rem1 > 0) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else
        {
            if (rem2 > 0) cout << 1 << endl;
            else cout << 2 << endl;
        }

    }


    return 0;
}


