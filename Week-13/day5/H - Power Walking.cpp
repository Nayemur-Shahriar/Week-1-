#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        set<int> s;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int sz = s.size();

        for (int i = 1; i <= sz; i++)
        {
            cout << sz << ' ';
        }
        for (int i = sz + 1; i <= n; i++)
        {
            cout << i << ' ';
        }
        cout<<endl;
    }
    return 0;
}
