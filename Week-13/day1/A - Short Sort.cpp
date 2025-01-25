#include <bits/stdc++.h>

using namespace std;

string alph = "abc";

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            cnt += (s[i] != alph[i]);
        }
        if (cnt <= 2)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

}
