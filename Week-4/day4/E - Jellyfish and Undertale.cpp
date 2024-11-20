#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> v(n+1);

        long long time = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

            if(v[i] >= a - 1)

                time =time + a - 1;
            else
                time =time + v[i];
        }

        time = time +b;

        cout << time <<endl;
    }

    return 0;
}
