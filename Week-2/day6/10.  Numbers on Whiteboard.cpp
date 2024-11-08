#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        cout << 2 << endl;
        
        int a=n;
        int b=n-1;

        
        for(int i = 1; i < n; i++) 
        {
            cout << a << " " << b << endl;
            a=(a+b+1)/2;
            b--;
            
        }

    }

    return 0;
}
