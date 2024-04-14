#include <bits/stdc++.h> 
void insertAtCorrectPos(stack<int>&s,int temp){
	if(s.empty()||temp>s.top()){
		s.push(temp);
		return;
	}
	else{
		int element=s.top();
		s.pop();
		insertAtCorrectPos(s, temp);
		s.push(element);
		return;
	}
}
void sort(stack<int>&s){
		if(s.empty()){
		return ;
	}
	int temp=s.top();
	s.pop();
	sort(s);
	insertAtCorrectPos(s,temp);
	return ;
}
stack<int> sortStack(stack<int> &s)
{
	sort(s);
	return s;

}