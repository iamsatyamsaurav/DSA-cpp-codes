#include<stack>
class SpecialStack {
    stack<int>s;
    int mini;
    public:
        
    void push(int data) {
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                s.push(2*data-mini);
                mini=data;
            }
            else{
                s.push(data);
            }
        } 
       
    }

    void pop() {
       
        int curr=s.top();
        if(curr>mini){
            s.pop();
        }
        else{
            mini=2*mini-curr;
            s.pop();
        }
    }

    int top() {
        
        int curr=s.top();
        if(curr>mini){
            return curr;
        }
        else{
            return mini;
        }
    }

    int getMin() {
        return mini;
    }  
};