int minSubsetSumDifference(vector<int>& arr, int n)
{
	//tabulation
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	vector<vector<bool>>dp(n,vector<bool>(sum+1,false));
	for(int i=0;i<n;i++){
		dp[i][0]=true;
	}
	
	dp[0][arr[0]]=true;
	for(int index=1;index<n;index++){
		for(int target=1;target<=sum;target++){
			bool notPick=dp[index-1][target];
            bool pick=false;
            if(target>=arr[index]){
                pick=dp[index-1][target-arr[index]];
            }
            dp[index][target]=pick||notPick;
        
		}
	}
	int mini=INT_MAX;
	for(int i=0;i<=sum/2;i++){
		if(dp[n-1][i]==true){
			int s1=i;
			int s2=sum-i;
			mini=min(mini,abs(s1-s2));
		}
	}
	return mini;
}
