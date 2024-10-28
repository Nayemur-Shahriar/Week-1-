#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
   int flag=0;
    for(int i=a;i<=b;i++)
    {
      if(i%c==0)
      {
          cout<<i;
         flag=1;
         break;
      }
    } 
       if(flag==0)  
       {
           cout<<"-1";
       }
       

    return 0;
}