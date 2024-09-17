int findNumberOfLIS(vector<int> &arr)
{
    int n=arr.size();
    vector<int>dp(n,1),count(n,1);
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
                count[i]=count[j];
            }
            else if(arr[j]<arr[i] && dp[j]+1==dp[i]){
                count[i]=count[i]+count[j];
            }
        }
        maxi=max(maxi,dp[i]);
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(dp[i]==maxi){
            cnt+=count[i];
        }
    }
    return cnt;
}