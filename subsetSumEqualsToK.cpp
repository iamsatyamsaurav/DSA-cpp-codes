#include <bits/stdc++.h> 
bool f(int index, int target, vector<int>&arr,vector<vector<int>>&dp){
    //base cases
    if(target==0){
        return true;
    }
    if(index==0){
        return arr[index]==target;
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    //doing stuffs on index
    bool notPick=f(index-1,target,arr,dp);
    bool pick=false;
    if(target>=arr[index]){
        pick=f(index-1,target-arr[index],arr,dp);
    }
    return dp[index][target]=pick||notPick;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    //tabulation
    vector<vector<bool>>dp(n,vector<bool>(k+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    dp[0][arr[0]]=true;

    for(int index=1;index<n;index++){
        for(int target=1;target<=k;target++){
            bool notPick=dp[index-1][target];
            bool pick=false;
            if(target>=arr[index]){
                pick=dp[index-1][target-arr[index]];
            }
            dp[index][target]=pick||notPick;
        }
    }
    return dp[n-1][k];


    //memoization
//     vector<vector<int>>dp(n,vector<int>(k+1,-1));
//    return f(n-1,k,arr,dp);
}