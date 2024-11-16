#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin >> t;

    while (t--)
        {
        int n, m;
        cin >> n >> m;

        vector<vector<long long>> v(n,vector<long long>(m));
        for(int i = 0; i< n;i++)
            {
            for (int j = 0; j< m;j++)
            {
                cin>>v[i][j];
            }
        }

        long long mx = LLONG_MIN;

        vector<pair<int,int>>moves= {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

        for(int i = 0; i< n;i++)
            {
            for(int j =0; j< m;j++)
            {
                long long k =v[i][j];

                for(auto [dx,dy] :moves)
                 {
                    int x = i+dx, y = j+dy;

                    while (x >= 0 && x< n && y >= 0 && y< m)
                    {
                        k += v[x][y];
                        x += dx;
                        y += dy;
                    }
                }
                mx =max(mx,k);
            }
        }

        cout<< mx<< endl;
    }

    return 0;
}
