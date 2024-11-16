#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a>> b;

        char sizeA = a.back();
        char sizeB = b.back();


        if(sizeA !=sizeB)
        {
            if((sizeA =='S') || (sizeA =='M'&& sizeB =='L'))
            {
                cout<< '<' <<endl;
            }
            else
            {
                cout<< '>'<< endl;
            }
        }
        else
        {
            int lenA = a.size();
            int lenB = b.size();

            if (sizeA =='S')
            {
                if(lenA >lenB)
                {
                    cout << '<'<< endl;
                }
                else if(lenA< lenB)
                {
                    cout<< '>' << endl;
                }
                else
                {
                    cout<< '=' << endl;
                }
            }
            else if(sizeA == 'L')
            {
                if(lenA > lenB)
                {
                    cout << '>' << endl;
                }
                else if(lenA <lenB)
                {
                    cout <<'<' << endl;
                }
                else
                {
                    cout<< '='<< endl;
                }
            }
            else
            {
                cout<< '=' <<endl;
            }
        }
    }

    return 0;
}
