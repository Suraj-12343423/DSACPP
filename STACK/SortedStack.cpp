#include <stack>

void sortedInsert(std::stack<int> &stack, int num) {
    if (stack.empty() || (!stack.empty() && stack.top() > num)) {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(std::stack<int> &s) {
    // Write your code here

    if (s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    sortStack(s);

    sortedInsert(s, num);
}
