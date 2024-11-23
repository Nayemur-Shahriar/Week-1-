#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        vector<vector<ll>> arr(n, vector<ll>(n - 1));
        vector<ll> cnt(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                    cnt[arr[i][j]]++;
            }
        }

        ll firstEle = -1;

        for (int i = 0; i < n + 1; i++)
            if (cnt[i] == n - 1)
            {
                cout << i << " ";
                firstEle = i;
                break;
            }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != firstEle)
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }
        }
        cout <<endl;
    }
}
