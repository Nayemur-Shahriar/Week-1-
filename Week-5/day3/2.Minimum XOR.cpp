#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], xr = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            xr = (xr ^ a[i]);
        }

        int mn = xr;

        for(int i = 0; i < n; i++) {
            int tempxr = (xr ^ a[i]);
            mn = min(mn, tempxr);
        }

        cout << mn << endl;
    }

}

