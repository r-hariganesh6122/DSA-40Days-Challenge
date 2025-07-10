// 🔒 LeetCode Problem: 19. Remove Nth Node From End of List
// 📚 Topic: Linked List + Two Pointers
// 🔧 Approach: Sliding window using two pointers (n apart)
// 💬 Notes:
// - Added dummy node to handle edge cases (deleting head)
// - Move `fast` pointer n steps ahead
// - Then move both `slow` and `fast` until `fast->next` is null
// - Delete the node after `slow`
// - Time: O(n), Space: O(1)

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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both pointers until fast reaches end
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Delete the nth node
        ListNode* toDelete = slow->next;
        slow->next = toDelete->next;
        delete toDelete;

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
