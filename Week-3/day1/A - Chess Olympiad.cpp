#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double x, y,z;
    cin >> x >> y>> z;

    double s2 = z + (y* 0.5);
    double s1 = (4-(x+y+z))+x+ (y*0.5);

    if (s1 > s2) 
    {
        cout<< "YES" << endl;
    }
    else 
    {
        cout <<"NO" << endl;
    }

    return 0;
}
