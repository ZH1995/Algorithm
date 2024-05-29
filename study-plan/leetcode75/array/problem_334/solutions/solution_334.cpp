// Problem 334 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        //vector<int> nums{2,1,5,0,4,6};
        //vector<int> nums{5,4,3,2,1};
        vector<int> nums{1,1,1,1,1,1,1};
        cout << increasingTriplet(nums) << endl;
    }

    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

