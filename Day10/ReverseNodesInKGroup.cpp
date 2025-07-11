// 🔒 LeetCode Problem: 25. Reverse Nodes in k-Group
// 📚 Topic: Linked List
// 🔧 Approach: Reverse each group of k nodes using helper function
// 💬 Notes:
// - Uses a dummy node to simplify head manipulation
// - Helper `reverse` function reverses a segment [a1, a2)
// - Carefully checks group boundaries using a counter and prevents partial reversal
// - Key bug resolved by checking `if (!t2 && size % k != 0)` to avoid reversing incomplete group

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
    // 🔄 Helper function to reverse a linked list segment [a1, a2)
    ListNode* reverse(ListNode* a1, ListNode* a2) {
        ListNode* t1 = a2;
        ListNode* t2 = a1;
        ListNode* t3 = a1;
        while (t3 != a2) {
            t3 = t3->next;
            t2->next = t1;
            t1 = t2;
            t2 = t3;
        }
        return t1; // New head of reversed segment
    }

    // 🚀 Main function to reverse nodes in k-sized groups
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next) return head;

        ListNode* Head = new ListNode(0, head); // Dummy node
        ListNode* t1 = head;
        ListNode* t2 = head;
        ListNode* t3 = Head;
        int size = 0;

        while (t2) {
            // Check if k nodes exist from current position
            for (int i = 0; i < k && t2; i++) {
                t2 = t2->next;
                size++;
            }
            // Break if remaining nodes are not enough for a group
            if (!t2 && size % k != 0) break;

            // Reverse the k-group and connect to the previous segment
            t3->next = reverse(t1, t2);
            for (int i = 0; i < k; i++) t3 = t3->next;

            // Move to next segment
            t1 = t2;
        }

        return Head->next;
    }
};
