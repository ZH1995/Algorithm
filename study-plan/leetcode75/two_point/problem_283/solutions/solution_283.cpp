// Problem 283 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        //vector<int> nums = {0,1,0,3,12};
        vector<int> nums = {0};
        moveZeroes(nums);
        output(nums);
    }

    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while (j < n) {
            while (j < n && nums[j] == 0) {
                j ++;
            }
            if (i < n && j < n) {
                nums[i++] = nums[j++];
            }
        }
        while (i < n) {
            nums[i++] = 0;
        }
    }

    void output(vector<int>& nums) {
        for (int val: nums) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

