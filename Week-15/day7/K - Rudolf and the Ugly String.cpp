#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        string s;
        cin >> s;

        long cnt = 0;
        long idx = 0;

        idx = s.find("mapie");

        while (idx >= 0 && idx < s.size())
        {
            cnt++;
            s[idx + 2] = '$';
            idx = s.find("mapie", idx + 1);
        }

        idx = s.find("map");

        while (idx >= 0 && idx < s.size())
        {
            cnt++;
            s[idx + 1] = '$';
            idx = s.find("map", idx + 1);
        }

        idx = s.find("pie");

        while (idx >= 0 && idx < s.size())
        {
            cnt++;
            s[idx + 1] = '$';
            idx = s.find("pie", idx + 1);
        }

        cout << cnt << endl;
    }
}
