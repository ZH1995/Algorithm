// Problem 374 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int guess(int num);

    int guessNumber(int n) {
        int left = 0, right = n-1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (guess(mid) == 0) {
                return mid;
            } else if (guess(mid) == -1) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    Solution sol;
    sol.guessNumber(10);
    return 0;
}

