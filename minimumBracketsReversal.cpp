#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()%2==1){     //odd number of brackets
    return -1;
  } 
  stack<char>st;
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch=='{'){
      st.push(ch);
    }
    else{
      if(!st.empty() && st.top()=='{'){
        st.pop();
      }
      else{
        st.push(ch);
      }
    }
  }
  //now we are left with unbalanced expression
  int a = 0; // count of {
  int b = 0; // count of }
  while(!st.empty()){
    if(st.top()=='{'){
      a++;
      st.pop();
    }
    else{
      b++;
      st.pop();
    }
  }
  int ans=(a+1)/2+(b+1)/2;
  return ans;
}