#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rnd, tst = 0, tmp, tmp2, i, j, cnt;
    int ara[10001];

    while (true)
    {
        fill(ara, ara + 10001, 0);

        cin >> num >> rnd;
        if (num == 0 && rnd == 0) break;

        for (i = 0; i < num; i++)
        {
            cin >> tmp;
            ara[tmp]++;
        }

        cout << "CASE# " << ++tst << ":"<<endl;
        for (i = 1; i <= rnd; i++)
        {
            cin >> tmp2;
            if (ara[tmp2] > 0)
            {
                for (j = 1, cnt = 1; j < tmp2; j++) cnt += ara[j];
                cout << tmp2 << " found at " << cnt <<endl;
            }
            else
            {
                cout << tmp2 << " not found"<<endl;
            }
        }
    }

    return 0;
}

