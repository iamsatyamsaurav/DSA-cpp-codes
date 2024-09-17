int f(int index, int N,vector<int> &arr,vector<vector<int>>&dp){
	if(index==0){
		return (N*arr[0]);
	}
	if(dp[index][N]!=-1){
		return dp[index][N];
	}
	int notPick=0+f(index-1,N,arr,dp);
	int pick=-1e9;
	int rodLength=index+1;
	if(rodLength<=N){
		pick=arr[index]+f(index,N-rodLength,arr,dp);
	}
	return dp[index][N]=max(notPick,pick);
}
int cutRod(vector<int> &arr, int n)
{
	//tabualation
	vector<vector<int>>dp(n,vector<int>(n+1,0));
	for(int N=1;N<=n;N++){
		dp[0][N]=N*arr[0];
	}
	for(int index=1;index<n;index++){
		for(int N=1;N<=n;N++){
			int notPick=0+dp[index-1][N];
			int pick=-1e9;
			int rodLength=index+1;
			if(rodLength<=N){
				pick=arr[index]+dp[index][N-rodLength];
			}
			dp[index][N]=max(notPick,pick);
		}
	}
	return dp[n-1][n];


	//memoization
	// vector<vector<int>>dp(n,vector<int>(n+1,-1));
	// return f(n-1,n,arr,dp);
}
