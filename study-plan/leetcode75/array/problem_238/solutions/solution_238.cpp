// Problem 238 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> nums = {1, 2, 3, 4};
        vector<int> res = productExceptSelf(nums);
        for (int val : res) {
            cout << val << " ";
        }
        cout << endl;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> output(len, 1);

        int leftProduct = 1;
        for (int i = 0; i < len; i ++) {
            output[i] = leftProduct;
            leftProduct *= nums[i];
        }

        int rightProduct = 1;
        for (int i = len - 1; i >= 0; i --) {
            output[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return output;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

