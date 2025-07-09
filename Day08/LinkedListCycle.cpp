/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // Floyd’s Cycle Detection Algorithm (Tortoise and Hare)
        while (fast && fast->next) {
            slow = slow->next;           // Move one step
            fast = fast->next->next;     // Move two steps

            // If both pointers meet, there’s a cycle
            if (slow == fast) return true;
        }

        return false;  // No cycle detected
    }
};
