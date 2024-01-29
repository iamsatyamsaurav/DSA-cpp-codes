#include<map>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	vector<int>ans;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[v[i]]++;
	}
	for(auto i:mp){
		if(i.second>n/3){
			ans.push_back(i.first);
		}
	}
	return ans;
	
}