// Problem 1071 solution

#include <iostream>
#include <numeric>
#include <string>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        cout << gcdOfStrings("ABCABC", "ABC") << endl;
        cout << gcdOfStrings("ABABAB", "ABAB") << endl;
        cout << gcdOfStrings("LEET", "CODE") << endl;
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        int gcdLen = __gcd(str1.size(), str2.size());

        return str1.substr(0, gcdLen);
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

