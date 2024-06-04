// Problem 1004 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
        int k = 2;
        cout << longestOnes(nums, k) << endl;
    }

    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0, zeroCnt = 0, maxLen = 0;
        for (right = 0; right < n; right ++) {
            if (nums[right] == 0) {
                zeroCnt ++;
            }

            while (zeroCnt > k) {
                if (nums[left] == 0) {
                    zeroCnt --;
                }
                left ++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

