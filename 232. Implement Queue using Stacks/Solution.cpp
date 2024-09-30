class MyQueue {
public:

    stack<int> s;
    stack<int> cache;
    
    MyQueue() {
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(cache.empty()){
            while(!s.empty()){
                cache.push(s.top());
                s.pop();
            }
        }
        int res = cache.top();
        cache.pop();
        return res;
    }
    
    int peek() {
        if(cache.empty()){
            while(!s.empty()){
                cache.push(s.top());
                s.pop();
            }
        }
        return cache.top();
    }
    
    bool empty() {
        return cache.empty() && s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */