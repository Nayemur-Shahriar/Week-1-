#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{


    ll t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        ll one = 0, zero = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1') one++;
            else zero++;
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                if (zero > 0) zero--;
                else break;
            }
            else
            {
                if (one > 0) one--;
                else break;
            }
        }
        cout << one+zero << endl;
    }


    return 0;
}

