// 🔒 LeetCode Problem: 143. Reorder List
// 📚 Topic: Linked List + Stack
// 🔧 Approach: Push all nodes into a stack and interleave top with next pointer
// 💬 Notes:
// - Uses a stack to access tail elements
// - Interleaves stack top with forward traversal
// - Time: O(n), Space: O(n)

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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        stack<ListNode*> st;
        ListNode* curr = head;

        // Push all nodes onto the stack
        while (curr) {
            st.push(curr);
            curr = curr->next;
        }

        int n = st.size();
        curr = head;

        // Interleave stack top with list nodes
        for (int i = 0; i < n / 2; ++i) {
            ListNode* top = st.top(); st.pop();
            top->next = curr->next;
            curr->next = top;
            curr = top->next;
        }

        // Properly terminate the list
        if (curr) curr->next = nullptr;
    }
};
