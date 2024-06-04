// Problem 1493 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> nums = {1,1,0,1};
        cout << longestSubarray(nums) << endl;
    }

    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0, maxLen = 0, zeroCnt = 0;
        for (right = 0; right < n; right ++) {
            if (nums[right] == 0) {
                zeroCnt ++;
            }
            while (zeroCnt > 1) {
                if (nums[left] == 0) {
                    zeroCnt --;
                }
                left ++;
            }
            maxLen = max(maxLen, right - left);
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

