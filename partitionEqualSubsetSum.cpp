// bool f(int index, int target,vector<int> &arr ,vector<vector<int>>&dp){
// 	if(target==0){
// 		return true;
// 	}
// 	if(index==0){
// 		return arr[index]==target;
// 	}
// 	if(dp[index][target]!=-1){
// 		return dp[index][target];
// 	}
// 	bool notPick=f(index-1,target,arr,dp);
// 	bool pick=false;
// 	if(arr[index]<=target){
// 		pick=f(index-1,target-arr[index],arr,dp);
// 	}
// 	return dp[index][target]=pick||notPick;
// }
bool canPartition(vector<int> &arr, int n)
{
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	if(sum%2!=0){
		// if sum is odd then we cannot divide it into two subsets with equal sum
		return false;
	}
	//tabulation
	int target=sum/2;
	vector<vector<bool>>dp(n,vector<bool>(target+1,0));
	for(int index=0;index<n;index++){
		dp[index][0]=true;
	}
	dp[0][arr[0]]=true;
	for(int index =1;index<n;index++){
		for(int tgt=1;tgt<=target;tgt++){
			bool notPick=dp[index-1][tgt];
			bool pick=false;
			if(arr[index]<=target){
				pick=dp[index-1][tgt-arr[index]];
		}
		dp[index][tgt]=pick||notPick;
		}
	}
	return dp[n-1][target];

	//memoization
	// int target=sum/2;
	// vector<vector<int>>dp(n,vector<int>(target+1,-1));
	// return f(n-1,target,arr,dp);
}
