#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    //using queue

    // int n=q.size();
    // queue<int>newq;
    // for(int i=0;i<n/2;i++){
    //     int element=q.front();
    //     q.pop();
    //     newq.push(element);
    // }
    // while(!newq.empty()){
    //     int element=newq.front();
    //     newq.pop();
    //     q.push(element);

    //     element=q.front();
    //     q.pop();
    //     q.push(element);
    // }

    //using stack;
    
    int n=q.size();
    stack<int>s;
    for(int i=0;i<n/2;i++){
        int element=q.front();
        q.pop();
        s.push(element);

    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
    for(int i=0;i<n/2;i++){
        int element=q.front();
        q.pop();
        q.push(element);
    }
    for(int i=0;i<n/2;i++){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);

        element=q.front();
        q.pop();
        q.push(element);
    }
}