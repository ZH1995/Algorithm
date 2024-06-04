// Problem 643 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        //vector<int> nums = {1,12,-5,-6,50,3};
        //int k = 4;
        vector<int> nums = {5};
        int k = 1;
        cout << findMaxAverage(nums, k) << endl;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxSum = 0;
        for (int i = 0; i < k; i ++) {
            maxSum += nums[i];
        }

        double sum = maxSum;
        for (int i = k; i < n; i ++) {
            sum += nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum / k;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

