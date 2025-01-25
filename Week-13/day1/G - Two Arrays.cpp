#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    sort(arr, arr + n);
    sort(brr, brr + n);

    for (int i = 0; i < n; i++)
    {
        int diff = brr[i] - arr[i];

        if (diff != 0 && diff != 1)
        {
            cout << "NO"<<endl;
            return;
        }
    }
    cout << "YES"<<endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
