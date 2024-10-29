#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        string s;
        cin >>n>>s;

        int firstB =-1,lastB =-1;

    
        for(int i =0; i< n; i++)
        {
            if(s[i]=='B')
            {
                if(firstB == -1) 
                firstB = i; 
                lastB = i;
            }
        }

        int minLen= (lastB-firstB)+ 1;
        
        cout<< minLen<< endl;
    }
    return 0;
}

