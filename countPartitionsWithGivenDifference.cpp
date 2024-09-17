#include <bits/stdc++.h> 
int mod=(int)(1e9+7);
// int f(int index,int target,vector<int>arr,vector<vector<int>>&dp){
//     if(index==0){
//        if(target==0){
//            if(arr[index]==0) return 2;
//            else return 1;
//        }
//        else{
//            return arr[index]==target;
//        }
//     }
//     if(dp[index][target]!=-1){
//         return dp[index][target];
//     }
//     int notPick=f(index-1,target,arr,dp);
//     int pick=0;
//     if(arr[index]<=target){
//         pick=f(index-1,target-arr[index],arr,dp);
//     }
//     return dp[index][target]=(pick+notPick)%mod;
    
// }
int countPartitions(int n, int d, vector<int> &arr) {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int target=(sum+d)/2;
    if((sum+d)%2!=0) return 0; //odd then return 0

    //space optimisation
    vector<int>prev(target+1,0),curr(target+1,0);
    if(arr[0]==0){
        prev[0]=2;
    }else{
        prev[0]=1;
    }
    if(arr[0]!=0 && arr[0]<=target){
        prev[arr[0]]=1;
    }
    for(int index=1;index<n;index++){
        for(int tgt=0;tgt<=target;tgt++){
            int notPick=prev[tgt];
            int pick=0;
            if(arr[index]<=tgt){
                pick=prev[tgt-arr[index]];
            
            }
            curr[tgt]=(pick+notPick)%mod;
        }
        prev=curr;
    }
    return prev[target];

    //tabulation
    // vector<vector<int>>dp(n,vector<int>(target+1,0));
    // if(arr[0]==0){
    //     dp[0][0]=2;
    // }else{
    //     dp[0][0]=1;
    // }
    // if(arr[0]!=0 && arr[0]<=target){
    //     dp[0][arr[0]]=1;
    // }
    // for(int index=1;index<n;index++){
    //     for(int tgt=0;tgt<=target;tgt++){
    //         int notPick=dp[index-1][tgt];
    //         int pick=0;
    //         if(arr[index]<=tgt){
    //             pick=dp[index-1][tgt-arr[index]];
            
    //         }
    //         dp[index][tgt]=(pick+notPick)%mod;
    //     }
    // }
    // return dp[n-1][target];

    //memoization
    //  vector<vector<int>>dp(n,vector<int>(target+1,-1));
    // return f(n-1,target,arr,dp);
}


