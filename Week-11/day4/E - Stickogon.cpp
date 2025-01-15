
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> sticks(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> sticks[i];
            freq[sticks[i]]++;
        }

        int pol = 0;

        for (auto& entry : freq)
        {
            int cnt = entry.second;

            while (cnt >= 3)
            {
                pol++;
                cnt -= 3;
            }
        }

        cout << pol << endl;
    }

    return 0;
}
