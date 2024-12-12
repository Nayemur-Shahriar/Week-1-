#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2;

    cin>>s1>>s2;

    int ps1 = 0;
    int ps2 = 0;
    int empty = 0;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] == '+')
        {
            ps1++;
        }
        if(s2[i] == '+')
        {
            ps2++;
        }
        if(s2[i] == '?')
        {
            empty++;
        }
    }

    int counter = 0;

    for(int i=0; i< (1<<empty); i++)
    {
        int ones = 0;
        for(int j = 0; j < empty; j++)
        {
            if(i & (1 << j))
            {
                ones++;
            }
        }

        if(ones + ps2 == ps1)
        {
            counter++;
        }
    }

    cout<<fixed<<setprecision(9)<<(double)counter/(1<<empty)<<endl;

    return 0;
}
