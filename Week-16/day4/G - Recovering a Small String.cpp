#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string find_smallest_word(int n) {
    for (char first = 'a'; first <= 'z'; ++first) {
        for (char second = 'a'; second <= 'z'; ++second) {
            for (char third = 'a'; third <= 'z'; ++third) {
                if ((first - 'a' + 1) + (second - 'a' + 1) + (third - 'a' + 1) == n) {
                    return string() + first + second + third;
                }
            }
        }
    }
    return "";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << find_smallest_word(n) << endl;
    }

    return 0;
}
