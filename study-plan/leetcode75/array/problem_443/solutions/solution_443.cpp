// Problem 443 solution

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        // your code
        vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
        cout << compress(chars) << endl;
    }

    int compress(vector<char>& chars) {
        int w = 0, r = 0;
        int len = chars.size();
        while (r < len) {
            char ch = chars[r];
            int cnt = 0;
            while (r < len && ch == chars[r]) {
                r ++;
                cnt ++;
            }

            chars[w++] = ch;
            if (cnt > 1) {
                string cntStr = to_string(cnt);
                for (char ch: cntStr) {
                    chars[w++] = ch;
                }
            }
        }
        return w;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

