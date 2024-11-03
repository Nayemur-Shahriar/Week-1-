#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,X;
    cin>> N>>X;
    
    vector<int>v; 

    for(int i = 0; i< N; i++) 
    {
        int num;
        cin >>num;
        
        if(num != X) 
        {
            v.push_back(num);
        }
    }

    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;

    return 0;
}
