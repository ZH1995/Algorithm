// Problem 1431 solution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> candies = {12, 1, 12};
        vector<bool> res = kidsWithCandies(candies, 10);
        output(res);
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = candies[0];
        int len = candies.size();
        for (int i = 0; i < len; i ++) {
            maxVal = max(maxVal, candies[i]);
        }

        vector<bool> res;
        for (int i = 0; i < len; i ++) {
            if (candies[i] + extraCandies >= maxVal) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }

    void output(vector<bool>& res) {
        int len = res.size();
        for (int i = 0; i < len; i ++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

