#include "all.h"

class Solution {
   public:
    int largestAltitude(
        vector<int>& gain
    ) {
        int curr = 0;
        int max_alt = 0;

        for (int val : gain) {
            curr += val;
            if (curr > max_alt) {
                max_alt = curr;
            }
        }

        return max_alt;
    }
};