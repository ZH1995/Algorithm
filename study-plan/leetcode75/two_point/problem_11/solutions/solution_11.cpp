// Problem 11 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        cout << maxArea(height) << endl;
    }

    int maxArea(vector<int>& height) {
        int len = height.size();
        int i = 0, j = len - 1, maxArea = -1;
        while (i < j) {
            int tmp = min(height[i], height[j]) * (j - i);
            if (tmp > maxArea) {
                maxArea = tmp;
            }
            if (height[i] > height[j]) {
                j --;
            } else {
                i ++;
            }
        }
        return maxArea;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

