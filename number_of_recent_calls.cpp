#include "all.h"

class RecentCounter {
   public:
    deque<int> times;
    RecentCounter()
        : times() {}

    int ping(
        int t
    ) {
        while (!times.empty() && times.front() < t - 3000) {
            times.pop_front();
        }

        times.push_back(t);

        return times.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */