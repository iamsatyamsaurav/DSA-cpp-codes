#include<bits/stdc++.h>
long f(int index,int target,int *arr ,vector<vector<long>>&dp){

    if(index==0){
        if(target%arr[0]==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    long notPick=f(index-1,target,arr,dp);
    long pick=0;
    if(arr[index]<=target){
        pick=f(index,target-arr[index],arr,dp);
    }
    return dp[index][target]=pick+notPick;
}
long countWaysToMakeChange(int *arr, int n, int value)
{
    vector<vector<long>>dp(n,vector<long>(value+1,-1));
   return f(n-1,value,arr,dp);
}