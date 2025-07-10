// 🔒 LeetCode Problem: 138. Copy List with Random Pointer
// 📚 Topic: Linked List + Hash Map
// 🔧 Approach: Use hash map to map old nodes to new nodes
// 💬 Notes:
// - First pass: Create all new nodes and map old to new
// - Second pass: Assign `.next` and `.random` using hash map
// - Time: O(n), Space: O(n)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        unordered_map<Node*, Node*> hash;

        Node* curr = head;

        // First pass: copy nodes without connections
        while (curr) {
            hash[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Second pass: assign next and random pointers
        curr = head;
        while (curr) {
            hash[curr]->next = hash[curr->next];
            hash[curr]->random = hash[curr->random];
            curr = curr->next;
        }

        return hash[head];
    }
};
