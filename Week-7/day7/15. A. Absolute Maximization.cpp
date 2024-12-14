
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

        vector<bool> hasOdd(11, false), hasEven(11, false);

        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;

            for (int bit = 0; bit <= 10; bit++)
            {
                if (x % 2 == 1)
                {
                    hasOdd[bit] = true;
                }
                else
                {
                    hasEven[bit] = true;
                }
                x /= 2;
            }
        }

        long result = 0, mul = 1;

        for (int bit = 0; bit <= 10; bit++)
        {
            if (hasOdd[bit] && hasEven[bit])
            {
                result += mul;
            }
            mul *= 2;
        }

        cout << result << endl;
    }

    return 0;
}
