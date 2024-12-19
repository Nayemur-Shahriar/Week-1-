#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char grid[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> grid[i][j];
            }

        }


        bool done = false;

        for (int i = 0; i < 8; i++)
        {
            bool allRed = true;

            for (int j = 0; j < 8; j++)
            {
                if (grid[i][j] != 'R')
                {
                    allRed = false;
                    break;
                }
            }
            if (allRed)
            {
                cout << "R" << endl;
                done = true;
                break;
            }
        }

        if (!done)
        {
            for (int j = 0; j < 8; j++)
            {
                bool allBlue = true;
                for (int i = 0; i < 8; i++)
                {
                    if (grid[i][j] != 'B')
                    {
                        allBlue = false;
                        break;
                    }
                }
                if (allBlue)
                {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
