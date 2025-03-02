#include <bits/stdc++.h>
using namespace std;

int sumCnt(int x)
{
    int sum = 0;

    while (x > 0)
    {
        sum =sum + (x % 10);
        x =x/10;
    }
    return sum;
}

int main()
{

    const int MAX_N = 200000;

    vector<int> preSum(MAX_N+1, 0);

    for (int i = 1; i <= MAX_N; i++)
    {
        preSum[i] = preSum[i - 1] + sumCnt(i);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << preSum[n] <<endl;
    }

    return 0;
}
