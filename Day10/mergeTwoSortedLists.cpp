// 🔒 LeetCode Problem: 21. Merge Two Sorted Lists
// 📚 Topic: Linked List, Two Pointers
// 🔧 Approach: Use a dummy node to build the merged list by comparing two lists node by node
// 💬 Notes:
// - Dummy node simplifies handling head insertions
// - Handles edge cases when one list is empty
// - Deletes dummy node after use for memory hygiene

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ✅ Handle base case when both lists are null
        if (!list1 && !list2) return nullptr;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        // ✅ Create a dummy node to simplify logic
        ListNode* Head = new ListNode(0, nullptr);
        ListNode* t3 = Head;

        // 🔁 Traverse both lists
        while (t1 || t2) {
            if (!t1) {
                t3->next = t2; // Remaining nodes in list2
                break;
            }
            if (!t2) {
                t3->next = t1; // Remaining nodes in list1
                break;
            }

            // 🔁 Pick smaller node and move corresponding pointer
            if (t1->val <= t2->val) {
                t3->next = t1;
                t3 = t3->next;
                t1 = t1->next;
            } else {
                t3->next = t2;
                t3 = t3->next;
                t2 = t2->next;
            }
        }

        // ✅ Skip dummy and return actual head
        ListNode* res = Head->next;
        delete Head; // Clean up dummy
        return res;
    }
};
