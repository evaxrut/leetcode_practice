#include "all.h"

class Solution {
   public:
    vector<vector<int>> findDifference(
        vector<int>& nums1,
        vector<int>& nums2
    ) {
        unordered_set<int> nums1_set(nums1.begin(), nums1.end());
        unordered_set<int> nums2_set(nums2.begin(), nums2.end());

        vector<int> out1;

        for (int num1 : nums1_set) {
            if (nums2_set.find(num1) == nums2_set.end()) {
                out1.push_back(num1);
            }
        }

        vector<int> out2;

        for (int num2 : nums2_set) {
            if (nums1_set.find(num2) == nums1_set.end()) {
                out2.push_back(num2);
            }
        }

        return {out1, out2};
    }
};