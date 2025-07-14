// 🔒 LeetCode Problem: 981. Time Based Key-Value Store
// 📚 Topic: Binary Search + Design + HashMap
// 🔧 Approach: HashMap with vector of {value, timestamp} pairs per key, then binary search
// 💬 Notes:
// - Used unordered_map to store key → list of (value, timestamp) pairs
// - Insertions are in increasing timestamp order, so binary search is valid
// - Binary search finds latest value with timestamp ≤ given time

class TimeMap {
    unordered_map<string, vector<pair<string, int>>> a;

public:
    // 🛠 Constructor
    TimeMap() {}

    // 🔧 Set operation: Append {value, timestamp} pair for the given key
    void set(string key, string value, int timestamp) {
        a[key].emplace_back(value, timestamp);
    }

    // 🔍 Get operation: Binary search to find latest timestamp ≤ given timestamp
    string get(string key, int timestamp) {
        if (!a.count(key)) return "";

        auto& x = a[key];  // reference to the vector of (value, timestamp) for key
        string res = "";
        int l = 0, r = x.size() - 1;

        // Binary search to find max timestamp ≤ given timestamp
        while (l <= r) {
            int m = (l + r) / 2;
            if (x[m].second <= timestamp) {
                res = x[m].first;  // potential candidate
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
