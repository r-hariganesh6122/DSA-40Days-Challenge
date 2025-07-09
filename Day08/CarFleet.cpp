#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, float>> a;  // Pair each car's position with its time to reach the target
        int n = speed.size();
        stack<float> b;              // Stack to track non-decreasing times (fleets)

        // Calculate time to reach target for each car and store with position
        for (int i = 0; i < position.size(); i++) {
            // Important: force float division to avoid integer truncation
            float time = (float)(target - position[i]) / speed[i];
            a.push_back({position[i], time});
        }

        // Sort cars based on their starting position in descending order
        sort(a.rbegin(), a.rend());

        // Greedily group cars into fleets
        for (auto i : a) {
            // A new fleet is formed if the car takes more time than the fleet ahead
            if (b.empty() || i.second > b.top()) {
                b.push(i.second);
            }
        }

        return b.size();  // Total fleets formed
    }
};
