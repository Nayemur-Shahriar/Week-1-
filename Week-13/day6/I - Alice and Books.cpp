
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

        vector<int> v(n);

        for (auto& i : v)
        {
            cin >> i;
        }
        cout << v.back() + (*max_element(v.begin(), v.begin() + n - 1)) <<endl;
    }
    return 0;
}
