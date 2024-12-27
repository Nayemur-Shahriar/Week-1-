
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t ;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<int> v(4);

        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '?') continue;
            v[str[i] - 'A']++;
        }

        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans =ans + min(v[i], n);
        }

        cout << ans <<endl;
    }
    return 0;
}
