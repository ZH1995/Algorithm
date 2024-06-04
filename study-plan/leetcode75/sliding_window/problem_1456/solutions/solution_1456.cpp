// Problem 1456 solution

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        string s = "abciiidef";
        int k = 3;
        cout << maxVowels(s, k) << endl;
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        unordered_set<char> word = {'a', 'e', 'i', 'o', 'u'};
        int curNum = 0;
        for (int i = 0; i < k; i ++) {
            if (word.count(s[i])) {
                curNum ++;
            }
        }
        int maxNum = curNum;
        for (int i = k; i < n; i ++) {
            if (word.count(s[i])) {
                curNum ++;
            }
            if (word.count(s[i-k])) {
                curNum --;
            }
            maxNum = max(maxNum, curNum);
        }
        return maxNum;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

