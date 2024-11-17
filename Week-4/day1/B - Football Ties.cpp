#include <iostream>
using namespace std;

int main() 
{
    
    int t;
    cin>>t;
    while(t--)
    {
    int X,Y;
    cin >> X>> Y;

    int tie = 0;
    
        for(int i = 0;i <= min(X,Y); i++) 
        {
            if((X-i)%3 == 0 && (Y-i)%3 ==0)
            {
                tie =i;
                break;
            }
        }

        cout<<tie<< endl;
    }
        
    return 0;
}
