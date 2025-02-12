#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int>& s)
{
    set<int> o;

    for (int x : s)
    {
        if (!o.empty() && !o.count(x-1) && !o.count(x+1)) return false;

        o.insert(x);
    }
    return true;
}

int main()
{
    int t, n;
    cin >> t;


    while (t--)
    {
        cin >> n;
        vector<int> s(n);

        for (int& x : s) cin >> x;

        if (isValid(s))
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
