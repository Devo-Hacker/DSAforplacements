class MyStack {
public:
    queue<int> queue1;
    queue<int> queue2;

    MyStack() {
    }

    void push(int x) {

        while(!queue2.empty()) {
            queue1.push(queue2.front());
            queue2.pop();
        }

        queue2.push(x);

        while(!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }
    }

    int pop() {
        int x = queue2.front();
        queue2.pop();
        return x;
    }

    int top() {
        return queue2.front();
    }

    bool empty() {
        return queue2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */