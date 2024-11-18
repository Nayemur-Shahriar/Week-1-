
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b, n, s;
        cin>>a >> b >> n >> s;

        int store= min(a,s/n)*n;

      int  rem= s-store;

      if(b>=rem)
    {
            cout<<"YES"<<endl;

      }
      else cout<<"NO"<<endl;



    }



    return 0;
}
