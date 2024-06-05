// Problem 2300 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        //vector<int> spells = {5,1,3}, potions = {1,2,3,4,5};
        //vector<int> ans = successfulPairs(spells, potions, 7);
        vector<int> spells = {3,1,2}, potions = {8,5,8};
        vector<int> ans = successfulPairs(spells, potions, 16);
        for (int val: ans) {
            cout << val << " ";
        }
        cout << endl;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i ++) {
            long long target = (success + spells[i] - 1) / spells[i];
            int left = 0, right = m - 1;
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (potions[mid] >= target) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            }
            if (potions[left] >= target) {
                ans[i] = m - left;
            } else {
                ans[i] = 0;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

