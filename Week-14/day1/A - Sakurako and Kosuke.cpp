#include <bits/stdc++.h>
using namespace std;

int main()
{


    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        n = abs(n);

        if (n % 2 == 1)
        {
            cout << "Kosuke" << endl;
        }
        else
        {
            cout << "Sakurako" <<endl;
        }
    }
}
