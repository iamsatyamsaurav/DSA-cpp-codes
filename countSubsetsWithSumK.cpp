int mod=(int)(1e9+7);
// int f(int index,int target,vector<int>arr,vector<vector<int>>&dp){
// 	if(index==0){
// 		if(target==0){
// 			if(arr[0]==0){
// 				return 2;
// 			}else{
// 				return 1;
// 			}
// 		}else{
// 			return arr[0]==target;
// 		}
// 	}
// 	if(dp[index][target]!=-1){
// 		return dp[index][target];
// 	}
// 	int notPick=f(index-1,target,arr,dp);
// 	int pick=0;
// 	if(arr[index]<=target){
// 		pick=f(index-1,target-arr[index],arr,dp);
// 	}
// 	return dp[index][target]=(pick+notPick)%mod;
// }
int findWays(vector<int>& arr, int k)
{
	int n=arr.size();
	//tabulation
	vector<vector<int>>dp(n,vector<int>(k+1,0));
	if(arr[0]==0){
		dp[0][0]=2;
	}else{
		dp[0][0]=1;
	}
	if (arr[0] != 0 && arr[0] <= k) {
    dp[0][arr[0]] = 1;  // One way to form arr[0]
	}
	for(int index=1;index<n;index++){
		for(int target=0;target<=k;target++){
			int notPick=dp[index-1][target];
			int pick=0;
			if(arr[index]<=target){
				pick=dp[index-1][target-arr[index]];
			}
			dp[index][target]=(pick+notPick)%mod;
		}
	}
	return dp[n-1][k];


	//memoization
	// vector<vector<int>>dp(n,vector<int>(k+1,-1));
	// return f(n-1,k,arr,dp);
}
