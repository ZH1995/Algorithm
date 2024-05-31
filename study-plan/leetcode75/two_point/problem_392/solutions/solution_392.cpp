// Problem 392 solution

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        cout << isSubsequence("abc", "ahbgdc") << endl;
        cout << isSubsequence("axc", "ahbgdc") << endl;
    }

    bool isSubsequence(string s, string t) {
        int lens = s.size(), lent = t.size();
        if (lens > lent) {
            return false;
        }

        map<char, bool> appear;
        for (char ch: t) {
            appear[ch] = true;
        }
        for (char ch: s) {
            if (!appear[ch]) {
                return false;
            }
        }

        int idxs = 0, idxt = 0;
        while (idxt < lent && idxs < lens) {
            if (s[idxs] == t[idxt]) {
                idxs ++;
                idxt ++;
            } else {
                idxt ++;
            }
        }

        return idxs == lens ? true : false;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

