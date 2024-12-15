
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }

        int max1 = INT_MAX, ans = INT_MAX;

        for(int i=0;i<n;i++)
        {
            max1 = max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            if (ans > max1)
            {
                ans = max1;
            }
        }
        ans = min({abs(arr[0] - arr[1]), ans, abs(arr[n - 1] - arr[n - 2])});
        cout << ans << endl;
    }

    return 0;
}





void solve()
{

}
