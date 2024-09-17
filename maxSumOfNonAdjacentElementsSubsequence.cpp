#include <bits/stdc++.h> 
//memoization
// int solve(int index, vector<int>&nums,vector<int>&dp){
//     if(index==0){
//         return nums[index]; //since all elements in the array are positive
//     }
//     if(index<0){
//         return 0;
//     }
//     if(dp[index]!=-1){
//         return dp[index];
//     }
//     int pick=nums[index]+solve(index-2,nums,dp);
//     int notPick=0+solve(index-1,nums,dp);
//     return dp[index]=max(pick,notPick);
// }
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    //space optimisation
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int take=nums[i]+prev2;
        int notTake=0+prev;
        int curri=max(take,notTake);
        prev2=prev;
        prev=curri;
    }
    return prev;

    //tabulation
    // vector<int>dp(n,-1);
    // dp[0]=nums[0];
    // for(int i=1;i<n;i++){
    //     int pick=nums[i];
    //     if(i>1){
    //         pick=pick+dp[i-2];
    //     }
    //     int notPick=0+dp[i-1];
    //     dp[i]=max(pick,notPick);
    // }
    // return dp[n-1];





    // vector<int>dp(n,-1);
    // return solve(n-1,nums,dp);
}