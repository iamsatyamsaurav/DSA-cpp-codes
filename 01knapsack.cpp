#include <bits/stdc++.h>
int f(int index, int W,vector<int> weight, vector<int> value,vector<vector<int>>&dp){
    if(index==0){
        if(weight[index]<=W){
            return value[index];
        }
        else{
            return 0;
        }
    }
    if(dp[index][W]!=-1){
        return dp[index][W];
    }
    int notPick=0+f(index-1,W,weight,value,dp);
    int pick=INT_MIN;
    if(weight[index]<=W){
        pick=value[index]+f(index-1,W-weight[index],weight,value,dp);
    }
    return dp[index][W]=max(notPick,pick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //space optimisation
    vector<int>prev(maxWeight+1,0),curr(maxWeight+1,0);
    for(int W=weight[0];W<=maxWeight;W++){
        prev[W]=value[0];
    }
    for(int index=1;index<n;index++){
        for(int W=0;W<=maxWeight;W++){
            int notPick=0+prev[W];
            int pick=INT_MIN;
            if(weight[index]<=W){
                pick=value[index]+prev[W-weight[index]];
            }
            curr[W]=max(notPick,pick);
        }
        prev=curr;
    }
    return prev[maxWeight];

    //tabulation
    // vector<vector<int>>dp(n,vector<int>(maxWeight+1,0));
    // for(int W=weight[0];W<=maxWeight;W++){
    //     dp[0][W]=value[0];
    // }
    // for(int index=1;index<n;index++){
    //     for(int W=0;W<=maxWeight;W++){
    //         int notPick=0+dp[index-1][W];
    //         int pick=INT_MIN;
    //         if(weight[index]<=W){
    //             pick=value[index]+dp[index-1][W-weight[index]];
    //         }
    //         dp[index][W]=max(notPick,pick);
    //     }
    // }
    // return dp[n-1][maxWeight];



    //memoization
    // vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	// return f(n-1,maxWeight,weight,value,dp);
}