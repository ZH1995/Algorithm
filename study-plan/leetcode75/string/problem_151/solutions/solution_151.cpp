// Problem 151 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        // your code
        cout << reverseWords("the sky is blue") << endl;
        cout << reverseWords("  hello world  ") << endl;
    }

    void trimSpaces(string &s) {
        int len = s.size();
        int i = 0, j = 0;
        while (j < len) {
            while (j < len && s[j] == ' ') {
                j ++;
            }
            while (j < len && s[j] != ' ') {
                s[i++] = s[j++];
            }
            while (j < len && s[j] == ' ') {
                j ++;
            }
            if (j < len) {
                s[i++] = ' ';
            }
        }
        return s.resize(i);
    }

    void reverseString(string &s, int start, int end) {
        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }

    string reverseWords(string s) {
        trimSpaces(s);
        reverseString(s, 0, s.length() - 1);
        int len = s.size(), start = 0, end;
        for (end = 0; end <= len; end ++) {
            if (s[end] == ' ' || end == len) {
                reverseString(s, start, end - 1);
                start = end + 1;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

