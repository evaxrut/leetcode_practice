#include "all.h"

class Solution {
   public:
    double findMaxAverage(
        vector<int>& nums,
        int k
    ) {
        double sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double max_sum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum -= nums[i - k];
            sum += nums[i];

            if (max_sum < sum) {
                max_sum = sum;
            }
        }

        return max_sum / k;
    }
};