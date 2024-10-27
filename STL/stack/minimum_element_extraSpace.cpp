//LEETCODE QUES NO:155 [not understand properly].........

class MinStack {
public:
        stack<int>st;
        stack<int>tempst; 
    MinStack() {
       
    }
    
    void push(int val) {
         st.push(val);
        if(tempst.size()==0 || tempst.top()>=val){
            tempst.push(val);
        }
        
    }
    
    void pop() {
         if(st.top()==tempst.top()){
            st.pop();
            tempst.pop();
        }  
        else{
            st.pop();
        }
        
          }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(tempst.size()==0){
        return -1;
        } 
        else{
      return tempst.top();
        } 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */