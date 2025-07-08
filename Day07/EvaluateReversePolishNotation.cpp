class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> a;

        for (int i = 0; i < tokens.size(); i++) {
            string s = tokens[i];

            // If token is an operator, pop two values and apply operation
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int a1 = a.top(); a.pop(); // Second operand
                int a2 = a.top(); a.pop(); // First operand

                if (s == "+") a.push(a2 + a1);
                if (s == "-") a.push(a2 - a1);
                if (s == "*") a.push(a2 * a1);
                if (s == "/") a.push(a2 / a1);
            }
            else {
                // Token is a number — convert and push
                a.push(stoi(s));
            }
        }

        return a.top();
    }
};
