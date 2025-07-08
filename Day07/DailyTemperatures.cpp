class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> a; // Stack to store indices
        int n = temperatures.size();
        vector<int> c(n, 0); // Output array, initialized to 0

        for (int i = 0; i < n; i++) {
            int b = temperatures[i];

            // While the current temperature is greater than the temperature at the top index of the stack
            while (!a.empty() && b > temperatures[a.top()]) {
                // Calculate the number of days waited
                c[a.top()] = i - a.top();
                a.pop();
            }

            // Push current index to the stack
            a.push(i);
        }

        return c;
    }
};
