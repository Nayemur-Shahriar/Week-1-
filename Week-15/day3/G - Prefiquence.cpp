#include <iostream>
using namespace std;

int main()
{

    long t;
    cin >> t;

    while(t--)
    {
        long n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        long idx=0, cnt=0;

        for(long p = 0; p < b.size(); p++)
        {
            if(b[p] == a[idx])
            {
                 cnt++;
                 idx++;
            }
            if(idx >= a.size())
            {
                break;
            }
        }

       cout << cnt <<endl;
    }

}
