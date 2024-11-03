#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    string orgnl = "Timur";
    
    sort(orgnl.begin(), orgnl.end()); 

    while(t--)
    {
        int n;
        string s;
        cin>>n >>s;
        
        if(n != 5) 
        {
            cout << "NO" << endl;
            continue; 
        }
        else
        {
            sort(s.begin(), s.end());
             
            if(s ==orgnl) 
            {
                cout<< "YES" << endl;
            }
            else
            {
                cout<< "NO" << endl;
            }
        }
    }
    
    return 0;
}
