#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int>ans(n);
    stack<int>s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(s.top()>=arr[i]){
            s.pop();
        }
        //top element of the stack is lesser than the arr[i]
        ans[i]=s.top();
        s.push(arr[i]);
    }
    return ans;
}