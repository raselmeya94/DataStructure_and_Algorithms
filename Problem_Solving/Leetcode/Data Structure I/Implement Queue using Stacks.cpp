class MyQueue {
public:
    stack<int>st;
    int size;
    MyQueue() {
        size=0;
    }
    
    void push(int x) {
        st.push(x);
        size++;
    }
    
    int pop() {
        
        if (empty())
            return -1;
        
        stack<int>temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int front=st.top();
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
                temp.pop();
        }
        size--;
        
        return front;
        
    }
    
    int peek() {
        
        stack<int>temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        int front=temp.top();
        
        while(!temp.empty()){
            st.push(temp.top());
                temp.pop();
        }
        
        return  front;
    }
    
    bool empty() {
        return size==0;
        
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
