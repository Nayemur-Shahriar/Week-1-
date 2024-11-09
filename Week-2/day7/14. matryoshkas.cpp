#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >>n;

        vector<int> arr(n);
        map<int,int> m;

        for(int i = 0; i< n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }

        int count = 0;

        while(true)
        {
            int flag = -1;
            int prev;
            
            vector<int>v;

            for(auto &i : m)
            {
                if (flag == -1 && i.second > 0)
                {
                    prev = i.first;
                    flag = 1;
                    count++;
                    i.second--;
                }
                else if(flag == 1 && i.second > 0)
                {
                    if(i.first == prev+1)
                    {
                        i.second--;
                        prev = i.first;
                    }
                    else
                    {
                        break;
                    }
                }

                if(i.second ==0)
                {
                    v.push_back(i.first);
                }
            }

            for(auto &i : v)
            {
                m.erase(i);
            }

            if (flag ==-1)
                break;
        }

        cout<< count<< endl;
    }

    return 0;
}
