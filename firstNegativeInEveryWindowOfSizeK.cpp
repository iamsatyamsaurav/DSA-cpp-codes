#include<queue>
vector<int> firstNegative(vector<int> arr, int n, int k) {
	//sliding window 
	vector<int>ans;
	queue<int>q;
	for(int i=0;i<k-1;i++){
		if(arr[i]<0){
			q.push(arr[i]);
		}
	}
	for(int i=k-1;i<n;i++){
		if(arr[i]<0){
			q.push(arr[i]);
		}
		if(q.size()!=0){
			ans.push_back(q.front());
			if(arr[i-k+1]==q.front()){
				q.pop();
			}
		}
		else{
			ans.push_back(0);
		}

	}
	return ans;
	
}