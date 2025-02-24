#include <bits/stdc++.h>


using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long r, c;
        cin >> r >> c;

        vector<string> v(r);

        for (long i = 0; i < r; i++)
        {
            cin >> v[i];
        }

        for (long j = 0; j < c; j++)
        {
            long b = r - 1;

            for (long i = r - 1; i >= 0; i--)
            {
                if (v[i][j] == '*')
                {
                    v[i][j] = '.';
                    v[b][j] = '*';
                    --b;
                }
                else if (v[i][j] == 'o')
                {
                    b = i - 1;
                }
            }
        }

        for (long i = 0; i < r; i++)
        {
            cout << v[i] << endl;
        }
    }
}

