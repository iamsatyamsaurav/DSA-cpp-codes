#include <bits/stdc++.h> 
void solve(stack<int>&inputStack, int size, int count){
   //base case
   if(count==size/2){
      inputStack.pop();
      return;
   }
   int ans=inputStack.top();
   inputStack.pop();
   solve(inputStack,size,count+1);
   inputStack.push(ans);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
   solve(inputStack,N,count);
   
}