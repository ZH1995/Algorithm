// Problem 1768 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int len1 = word1.size(), len2 = word2.size();
        string res = "";
        while (i < len1 || j < len2) {
            if (i < len1) {
                res += word1[i++];
            }
            if (j < len2) {
                res += word2[j++];
            }
        }
        return res;
    }
};

int main() {
    string word1 = "abcd", word2 = "pq";
    Solution sol;
    cout << sol.mergeAlternately(word1, word2) << endl;
    return 0;
}

