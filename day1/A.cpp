#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        cnt++;
    }
    cout<<cnt;

    return 0;
}