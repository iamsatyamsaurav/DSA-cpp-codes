#include<bits/stdc++.h>
long f(int index,int buy,long * arr,int n,vector<vector<long>>&dp){
    if(index==n){
        return 0;
    }
    //we are allowed to buy
    if(dp[index][buy]!=-1){
        return dp[index][buy];
    }
    long profit=0;
    if(buy){
        profit=max(-arr[index]+f(index+1,0,arr,n,dp),
                    0+f(index+1,1,arr,n,dp));
    }
    //we are not allowed to buy ....ie we can sell
    else{
        profit=max(arr[index]+f(index+1,1,arr,n,dp),
                    0+f(index+1,0,arr,n,dp));
    }
    return dp[index][buy]=profit;
}
long getMaximumProfit(long *arr, int n)
{

    //space optimisation
    vector<long>ahead(2,0),curr(2,0);
    ahead[0]=0;
    ahead[1]=0;
    for(long index=n-1;index>=0;index--){
        for(long buy=0;buy<=1;buy++){
            long profit=0;
            if(buy){
                profit=max((-arr[index]+ahead[0]),
                            (0+ahead[1]));
            }
            //we are not allowed to buy ....ie we can sell
            else{
                profit=max((arr[index]+ahead[1]),
                            (0+ahead[0]));
            }
            curr[buy]=profit;
        }
        ahead=curr;
    }
    return ahead[1];

    //tabulation
    // vector<vector<long>>dp(n+1,vector<long>(2,0));
    // dp[n][0]=0;
    // dp[n][1]=0;
    // for(long index=n-1;index>=0;index--){
    //     for(long buy=0;buy<=1;buy++){
    //         long profit=0;
    //         if(buy){
    //             profit=max((-arr[index]+dp[index+1][0]),
    //                         (0+dp[index+1][1]));
    //         }
    //         //we are not allowed to buy ....ie we can sell
    //         else{
    //             profit=max((arr[index]+dp[index+1][1]),
    //                         (0+dp[index+1][0]));
    //         }
    //         dp[index][buy]=profit;
    //     }
    // }
    // return dp[0][1];

    //memoization
    // vector<vector<long>>dp(n+1,vector<long>(2,-1));

    // return f(0,1,arr,n,dp);
}