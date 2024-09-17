#include <bits/stdc++.h> 
void solve(string str,vector<string> & ans,string output,int index){
	//base case
	if(index>=str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}
	//exclude
	solve(str,ans,output,index+1);
	//include
	char ch=str[index];
	output.push_back(ch);
	solve(str,ans,output,index+1);
	return;
}
vector<string> subsequences(string str){
	
	vector<string> ans;
	string output="";
	int index=0;
	solve(str,ans,output,index);
	return ans;
	
}
