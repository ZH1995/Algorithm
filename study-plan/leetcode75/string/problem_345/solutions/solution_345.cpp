// Problem 345 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        // your code
        cout << reverseVowels("hello") << endl;
        cout << reverseVowels("leetcode") << endl;
        cout << reverseVowels("aA") << endl;
    }

    bool isHit(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        } else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int len = s.size();
        int i = 0, j = len - 1;
        while (i < j) {
            if (isHit(s[i])) {
                while (i < j && !isHit(s[j])) {
                    j --;
                }
                if (isHit(s[j])) {
                    char tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                    j --;
                }
            }
            i ++;
        }
        return s;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

