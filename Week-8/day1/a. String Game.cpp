#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int z = 0, o = 0;

        for (char c : s)
        {
            if (c == '1')
                o++;
            else
                z++;
        }

        if (min(z, o) % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}
