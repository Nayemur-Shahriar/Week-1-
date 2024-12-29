//https://cses.fi/problemset/task/1755


#include <bits/stdc++.h>
using namespace std;

string solve(string S)
{
    int N = S.length();
    string ans(N, ' ');

    int freq[26] = {};
    for (char c : S)
    {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    char odd_char = '\0';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    if (odd_count > 1)
        return "NO SOLUTION";

    int left = 0, right = N - 1;

    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 1)
        {
            ans[left++] = 'A' + i;
            ans[right--] = 'A' + i;
            freq[i] -= 2;
        }
    }

    if (odd_char != '\0')
    {
        ans[N / 2] = odd_char;
    }

    return ans;
}

int main()
{
    string S;
    cin >> S;

    cout << solve(S) << endl;
    return 0;
}
