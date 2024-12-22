#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long x = (n / a) * p, y = (n / b) * q, repeat = (n / lcm(a, b));

    long long ans = ((x + y) - (repeat * (p + q))) + (repeat * max(p, q));

    cout << ans <<endl;

    return 0;
}
