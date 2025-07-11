// 🔒 LeetCode Problem: 2. Add Two Numbers
// 📚 Topic: Linked List, Math
// 🔧 Approach: Traverse both lists while handling carry using a dummy node for simplicity
// 💬 Notes:
// - Inspired by logic gate-style addition with carry tracking
// - Handles uneven lengths of lists
// - Adds a new node for any leftover carry at the end

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int v1 = 0, v2 = 0, carry = 0;

        // Create dummy node to simplify insertion
        ListNode* Head = new ListNode(0, nullptr);
        ListNode* t3 = Head;

        // Traverse until both lists and carry are exhausted
        while (l1 || l2 || carry > 0) {
            if (l1) {
                v1 = l1->val;
                l1 = l1->next;
            } 
            if (l2) {
                v2 = l2->val;
                l2 = l2->next;
            }

            // ➕ Add the two values and carry
            int sum = v1 + v2 + carry;

            // Create new node with digit part and update carry
            t3->next = new ListNode(sum % 10, nullptr);
            t3 = t3->next;
            carry = sum / 10;

            // Reset for next iteration
            v1 = 0;
            v2 = 0;
        }

        // Skip dummy and return result
        ListNode* res = Head->next;
        delete Head;
        return res;
    }
};
