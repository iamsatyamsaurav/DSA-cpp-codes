#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    stack<int>s;
    int element=INT_MIN;
    while(!q.empty()){
        element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        element=s.top();
        s.pop();
        q.push(element);
    }
}