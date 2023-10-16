#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //checking overflow condition
        if((front == 0 && rear==size-1)||(rear==(front-1)%(size-1))){
            return false;
        }
        else{
            //inserting first element
            if(front==-1){
                front=0;
                rear=0;
                arr[rear]=value;
            }
            //maintaining circular nature
            else if(rear==size-1 && front!=0){
                rear=0;
                arr[rear]=value;
            }
            //normal flow
            else{
                rear++;
                arr[rear]=value;
            }
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //checking underflow condition
        if(front==-1){
            return -1;
        }
        //only one element in the queue
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        // mainting circular nature
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};