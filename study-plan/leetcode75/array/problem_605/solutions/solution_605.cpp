// Problem 605 solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // solve code
    void solve() {
        vector<int> flowerbed = {1, 0, 0, 0, 1};
        cout << canPlaceFlowers(flowerbed, 1) << endl;
        cout << canPlaceFlowers(flowerbed, 2) << endl;
    }

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        for (int i = 0; i < len; i ++) {
            if (flowerbed[i] == 0) {
                bool prev = (i == 0) || (flowerbed[i-1] == 0);
                bool next = (i == len - 1) || (flowerbed[i+1] == 0);
                if (prev && next) {
                    flowerbed[i] = 1;
                    n --;
                    if (n == 0) {
                        break;
                    }
                }
            }
        }
        return n > 0 ? false : true;
    }
};

int main() {
    Solution sol;
    sol.solve();
    return 0;
}

