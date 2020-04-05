/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (40.03%)
 * Likes:    2780
 * Dislikes: 282
 * Total Accepted:    431.7K
 * Total Submissions: 1M
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n' +
  '[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 * 
 * 
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 * 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class MinStack {
private:
    stack<int> normal_stack;
    stack<int> min_stack;

public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        normal_stack.push(x);
        if (min_stack.empty() || x <= min_stack.top()){
            min_stack.push(x);
        }
    }
    
    void pop() {
        int temp = normal_stack.top();
        normal_stack.pop();
        if (!min_stack.empty() && temp == min_stack.top()){
            min_stack.pop();
        }
    }
    
    int top() {
        return normal_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

