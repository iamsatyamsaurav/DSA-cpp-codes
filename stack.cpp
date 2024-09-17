#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0)
        return arr[top];
        else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(){

    Stack s(5);
    s.push(12);
    s.push(10);
    cout<<s.peek();
    s.pop();
    cout<<s.peek();
    s.pop();
    if(s.isEmpty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"non empty"<<endl;
    }







    // stack<int> s;
    // s.push(10);
    // s.push(2);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<"after pop :"<<s.top();
}