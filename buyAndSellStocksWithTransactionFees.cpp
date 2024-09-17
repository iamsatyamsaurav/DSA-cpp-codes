int f(int index,int buy,int fee,int n,vector<int>&prices,vector<vector<int>>&dp){
	if(index==n){
		return 0;
	}
	if(dp[index][buy]!=-1){
		return dp[index][buy];
	}
	if(buy){
		return dp[index][buy]=max((-prices[index]+f(index+1,0,fee,n,prices,dp)),
					0+f(index+1,1,fee,n,prices,dp));
	}
	else{
		return dp[index][buy]=max((prices[index]-fee+f(index+1,1,fee,n,prices,dp)),
					0+f(index+1,0,fee,n,prices,dp));
	}
}
int maximumProfit(vector<int> &prices, int n, int fee)
{
	//tabulation
	vector<vector<int>>dp(n+1,vector<int>(2,0));
	for(int index=n-1;index>=0;index--){
		for(int buy=0;buy<=1;buy++){
			if(buy){
				dp[index][buy]=max((-prices[index]+dp[index+1][0]),
							0+dp[index+1][1]);
			}
			else{
				dp[index][buy]=max((prices[index]-fee+dp[index+1][1]),
							0+dp[index+1][0]);
			}
		}
	}
	return dp[0][1];

	// memoization
	// vector<vector<int>>dp(n+1,vector<int>(2,-1));
	// return f(0,1,fee,n,prices,dp);
}
