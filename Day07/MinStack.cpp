class MinStack {
public:
    stack<int> a; // Main stack
    stack<int> b; // Auxiliary stack to track current minimums

    MinStack() {}

    void push(int val) {
        a.push(val);
        // Push to min stack only if it's empty or the current value is <= top of min stack
        if (b.empty() || b.top() >= val)
            b.push(val);
    }

    void pop() {
        // If the value being popped is also the min, remove from both stacks
        if (a.top() == b.top())
            b.pop();
        a.pop();
    }

    int top() {
        return a.top();
    }

    int getMin() {
        return b.top(); // Top of min stack holds the current minimum
    }
};
