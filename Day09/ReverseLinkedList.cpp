// 🔒 LeetCode Problem: 206. Reverse Linked List
// 📚 Topic: Linked List
// 🔧 Approach: Iterative pointer manipulation (3-pointer technique)
// 💬 Notes:
// - Uses 3 pointers: `prev`, `curr`, `next`
// - Reverses the list by flipping the `.next` pointers one by one
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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr) {
            next = curr->next;      // Save the next node
            curr->next = prev;      // Reverse the link
            prev = curr;            // Move prev forward
            curr = next;            // Move curr forward
        }
        return prev;  // New head of reversed list
    }
};
