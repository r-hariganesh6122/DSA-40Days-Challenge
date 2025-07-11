// 🔒 LeetCode Problem: 146. LRU Cache
// 📚 Topic: Linked List + HashMap (Design)
// 🔧 Approach: Combine unordered_map for O(1) lookup with list for O(1) recent usage tracking
// 💬 Notes:
// - Used `unordered_map<int, pair<value, iterator>>` to store value and its location in the usage list
// - Maintains `list<int>` for usage order (most recently used at front)
// - On `get`: move key to front (most recently used)
// - On `put`: evict least recently used (from back) if full

class LRUCache {
    int cap; // Cache capacity
    list<int> order; // Stores key usage order: front = most recently used
    unordered_map<int, pair<int, list<int>::iterator>> cache; // Maps key to (value, position in list)

public:
    // Constructor to set the capacity
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    // Retrieve value for the key and mark it most recently used
    int get(int key) {
        if (cache.find(key) == cache.end()) return -1;

        // Move accessed key to the front
        order.erase(cache[key].second);
        order.push_front(key);
        cache[key].second = order.begin();
        return cache[key].first;
    }
    
    // Insert or update key-value pair and mark key as most recently used
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            // Key exists: erase old position
            order.erase(cache[key].second);
        }
        else if (cache.size() == cap) {
            // Cache is full: remove least recently used
            int lruKey = order.back();
            cache.erase(lruKey);
            order.pop_back();
        }
        // Insert the new key at front and update map
        order.push_front(key);
        cache[key] = {value, order.begin()};
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
