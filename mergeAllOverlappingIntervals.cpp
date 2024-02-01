#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	vector<vector<int>>ans;
	int n=arr.size();
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(ans.empty() || arr[i][0]>ans.back()[1]){
			ans.push_back(arr[i]);
		}
		else{
			if(arr[i][0]<=ans.back()[1]){
				ans.back()[1]=max(ans.back()[1],arr[i][1]);
			}
				
			
		}
	}
	return ans;




// int n=arr.size();
	// sort(arr.begin(),arr.end());
	// vector<vector<int>>ans;
	// for(int i=0;i<n;i++){
	// 	int start=arr[i][0];
	// 	int end=arr[i][1];
	// 	//if already included
	// 	if(!ans.empty() && end<=ans.back()[1]){
	// 		continue;
	// 	}
	// 	for(int j=i+1;j<n;j++){
	// 		if(arr[j][0]<=end){
	// 			end=max(end,arr[j][1]);
	// 		}
	// 		else{
	// 			break;
	// 		}
	// 	}
	// 	ans.push_back({start,end});
	// }
	// return ans;
	
}