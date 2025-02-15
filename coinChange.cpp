class Solution {
public:
    int f(int index,int amount,vector<int>&coins,vector<vector<int>>&dp){
        //base case
        if(index==0){
            if(amount%coins[index]==0){
                return (amount/coins[index]);
            }
            else{
                return 1e9;
            }
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
        int notPick=0+f(index-1,amount,coins,dp);
        int pick=INT_MAX;
        if(amount>=coins[index]){
            pick=1+f(index,amount-coins[index],coins,dp);
        }
        return dp[index][amount]=min(pick,notPick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=f(n-1,amount,coins,dp);
        if(ans>=1e9){
            return -1;
        }
        else{
            return ans;
        }
    }
};