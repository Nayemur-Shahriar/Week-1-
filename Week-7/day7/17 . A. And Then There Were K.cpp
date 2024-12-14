#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int msb = 0;

        while (n > 1)
        {
            n /= 2;
            msb++;
        }

        cout << ((1 << msb) - 1) << endl;
    }
    return 0;
}
