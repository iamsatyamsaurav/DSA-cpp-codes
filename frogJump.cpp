#include <bits/stdc++.h>  
//MEMOIZATION
// int solve(int index,vector<int>heights,vector<int>&dp){
//     if(index==0){
//         return 0;
//     }
//     if(dp[index]!=-1){
//         return dp[index];
//     }
//     int left=solve(index-1,heights,dp)+abs(heights[index]-heights[index-1]);
//     int right=INT_MAX;
//     if(index>1){
//         right=solve(index-2,heights,dp)+abs(heights[index]-heights[index-2]);
//     }
//     return dp[index]= min(left,right);
// }
int frogJump(int n, vector<int> &heights)
{
    //SPACE OPTIMIZATION
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int left=prev+abs(heights[i]-heights[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=prev2+abs(heights[i]-heights[i-2]);
        }
        int curri=min(left,right);
        prev2=prev;
        prev=curri;
    }
    return prev;



    //TABULATION
    // vector<int>dp(n,-1);
    // dp[0]=0; //base case
    // for(int i=1;i<n;i++){
    //     int left=dp[i-1]+abs(heights[i]-heights[i-1]);
    //     int right=INT_MAX;
    //     if(i>1){
    //         right=dp[i-2]+abs(heights[i]-heights[i-2]);
    //     }
    //     dp[i]=min(left,right);

    // }
    // return dp[n-1];

    // return solve(n-1,heights,dp);
}