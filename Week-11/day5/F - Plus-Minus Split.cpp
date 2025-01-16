
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        ll ans = 0;

        for (auto& i : str)
        {
            if (i == '-')
            {
                ans--;
            }
            else
            {
                ans++;
            }
        }
        cout << abs(ans) <<endl;
    }
    return 0;
}
