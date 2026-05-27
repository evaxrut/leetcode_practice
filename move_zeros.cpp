#include "all.h"

class Solution {
   public:
    void moveZeroes(
        vector<int>& nums
    ) {
        int a = -1;
        int b = 0;

        while (b < nums.size()) {
            if (nums[b] == 0) {
                b++;
            } else if (a + 1 == b) {
                a++;
                b++;
            } else {
                nums[a + 1] = nums[b];
                nums[b] = 0;
                a++;
                b++;
            }
        }
    }
};