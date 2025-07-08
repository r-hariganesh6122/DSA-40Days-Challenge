class Solution {
public:
    bool isValid(string s) {
        stack<int> c;

        for (int i = 0; i < s.size(); i++) {
            // If current character is an opening bracket, push to stack
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
                c.push(s[i]);
            else {
                // If stack is empty and we get a closing bracket, it's invalid
                if (c.empty()) return false;

                // Check if the top of stack matches the current closing bracket
                if ( (s[i] == '}' && c.top() != '{') ||
                     (s[i] == ']' && c.top() != '[') ||
                     (s[i] == ')' && c.top() != '(') )
                    return false;

                // Valid match, pop the opening bracket
                c.pop();
            }
        }

        // Stack should be empty if all brackets were matched
        return c.empty();
    }
};
