#include <sstream>
#include <vector>
#include "all.h"

class Solution {
   public:
    string removeStars(
        string s
    ) {
        vector<char> stack;

        for (char c : s) {
            if (c == '*') {
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }

        return string(stack.begin(), stack.end());
    }
};