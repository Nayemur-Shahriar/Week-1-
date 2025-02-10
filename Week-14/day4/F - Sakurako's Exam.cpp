#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        bool x = (num1 % 2 == 0);
        bool y = (num2 % 2 == 0);
        bool z = (num1 != 0);

        if (x && (y || z))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
