#include <sstream>
#include <string>
#include "all.h"

class Solution {
   public:
    string mergeAlternately(
        string word1,
        string word2
    ) {
        int idx1 = 0, idx2 = 0;
        stringstream out_ss;
        while (idx1 < word1.length() || idx2 < word2.length()) {
            if (idx1 < word1.length()) {
                out_ss << word1[idx1];
                idx1++;
            }

            if (idx2 < word2.length()) {
                out_ss << word2[idx2];
                idx2++;
            }
        }

        return out_ss.str();
    }
};