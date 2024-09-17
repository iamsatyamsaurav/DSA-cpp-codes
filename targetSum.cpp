#include <bits/stdc++.h> 
int f(int index,int target,vector<int>&arr,vector<vector<int>>&dp){
    if(index==0){
        if(target==0){
            if(arr[0]==0){
                return 2;
            }else{
                return 1;
            }
        }else if (target == arr[0]) {
                return 1;  // 1 way: if target is equal to arr[0]
            } else {
                return 0;  // no way to form the target
            }
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    int notPick=f(index-1,target,arr,dp);
    int pick=0;
    if(arr[index]<=target){
        pick=f(index-1,target-arr[index],arr,dp);
    }
    return dp[index][target]=pick+notPick;
}
int targetSum(int n, int target, vector<int>& arr) {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if((sum+target)<0 || (sum+target)%2!=0){
        return 0;
    }
    int tgt=(sum+target)/2;
    vector<vector<int>>dp(n,vector<int>(tgt+1,-1));
    return f(n-1,tgt,arr,dp);
    
}
