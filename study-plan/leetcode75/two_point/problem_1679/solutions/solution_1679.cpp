// Problem 1679 solution

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> nums = {3,1,3,4,3};
        int k = 6;
        cout << maxOperations(nums, k) << endl;
    }

    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int, int> hash;
        for (int num: nums) {
            int target = k - num;
            if (hash[target] > 0) {
                res ++;
                hash[target] --;
            } else {
                hash[num] ++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

