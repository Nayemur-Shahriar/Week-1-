
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;

    string vowels = "aeiou";


    while (t--)
    {
        ll n, vowelSeq, rem;
        string res = "";
        cin >> n;
        vowelSeq = n / 5;
        rem = n % 5;
        while (vowelSeq--)
        {
            res += vowels;
        }
        for (ll i = 0 ; i < rem ; i++)
        {
            res += vowels[i];
        }
        sort(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}
