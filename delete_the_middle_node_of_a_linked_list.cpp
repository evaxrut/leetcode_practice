#include <cstddef>
#include "all.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode* next;
    ListNode()
        : val(0),
          next(nullptr) {}
    ListNode(
        int x
    )
        : val(x),
          next(nullptr) {}
    ListNode(
        int x,
        ListNode* next
    )
        : val(x),
          next(next) {}
};

class Solution {
   public:
    ListNode* deleteMiddle(
        ListNode* head
    ) {
        int counter = 0;

        ListNode* curr = head;
        while (true) {
            if (curr == nullptr) {
                break;
            }

            counter++;
            curr = curr->next;
        }
        if (counter == 1) {
            return nullptr;
        }

        int middle = counter / 2;

        curr = head;

        for (int i = 0; i < middle - 1; i++) {
            curr = curr->next;
        }

        curr->next = curr->next->next;
        return head;
    }
};