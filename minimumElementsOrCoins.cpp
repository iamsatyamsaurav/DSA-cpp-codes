#include <bits/stdc++.h> 
int f(int index,int target,vector<int> &nums,vector<vector<int>>&dp){
    if(index==0){
        if(target%nums[0]==0){
            return target/nums[0];
        }
        else{
            return 1e9;
        }
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    int notPick=0+f(index-1,target,nums,dp);
    int pick=1e9;
    if(nums[index]<=target){
        pick=1+f(index,target-nums[index],nums,dp);
    }
    return dp[index][target]=min(pick,notPick);
}
int minimumElements(vector<int> &nums, int x)
{
    int n=nums.size();
    //space optimisation
    vector<int>prev(x+1,0),curr(x+1,0);
    for(int target=0;target<=x;target++){
        if(target%nums[0]==0){
            prev[target]=target/nums[0];
        }
        else{
            prev[target]=1e9;
        }
    }

    for(int index=1;index<n;index++){
        for(int target=0;target<=x;target++){
            int notPick=0+prev[target];
            int pick=1e9;
            if(nums[index]<=target){
                pick=1+curr[target-nums[index]];
            }
            curr[target]=min(pick,notPick);
        }
        prev=curr;
    }
    int ans=prev[x];




    //tabulation
    // vector<vector<int>>dp(n,vector<int>(x+1,0));
    // for(int target=0;target<=x;target++){
    //     if(target%nums[0]==0){
    //         dp[0][target]=target/nums[0];
    //     }
    //     else{
    //         dp[0][target]=1e9;
    //     }
    // }

    // for(int index=1;index<n;index++){
    //     for(int target=0;target<=x;target++){
    //         int notPick=0+dp[index-1][target];
    //         int pick=1e9;
    //         if(nums[index]<=target){
    //             pick=1+dp[index][target-nums[index]];
    //         }
    //         dp[index][target]=min(pick,notPick);
    //     }
    // }
    // int ans=dp[n-1][x];

    //memoization
    // vector<vector<int>>dp(n,vector<int>(x+1,-1));
    // int ans=f(n-1,x,nums,dp);
    if(ans>=1e9){
        return -1;
    }
    else{
        return ans;
    }
}