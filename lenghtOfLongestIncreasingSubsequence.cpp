class Solution {
public:
int f(int index,int prev_index,vector<int>&arr,int n,vector<vector<int>>&dp){
    if(index==n){
        return 0;
    }
    if(dp[index][prev_index+1]!=-1){
        return dp[index][prev_index+1];
    }
    int notPick=0+f(index+1,prev_index,arr,n,dp);
    int pick=0;
    if(prev_index==-1 || arr[index]>arr[prev_index]){
        pick=1+f(index+1,index,arr,n,dp);
    }
    return dp[index][prev_index+1]=max(notPick,pick);
}
    int lengthOfLIS(vector<int>& arr) {
        //memoization
        int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    return f(0,-1,arr,n,dp);
    }
};