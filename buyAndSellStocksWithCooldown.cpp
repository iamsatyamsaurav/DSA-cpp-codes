int f(int index,int buy,int n,vector<int>&prices,vector<vector<int>>&dp){
    if(index>=n){
        return 0;
    }
    if(dp[index][buy]!=-1){
        return dp[index][buy];
    }

    if(buy){
        return dp[index][buy]= max((-prices[index]+f(index+1,0,n,prices,dp)),
                    0+f(index+1,1,n,prices,dp));
    }

    //there can be case when index can go to n+1
    else{
        return dp[index][buy]=max((prices[index]+f(index+2,1,n,prices,dp)),
                    0+f(index+1,0,n,prices,dp));
    }
}
int stockProfit(vector<int> &prices){
    int n=prices.size();
    //space optimisation
     vector<int>front2(2,0),front1(2,0),curr(2,0);
    //base case is already 0 so we do not need to do anything for base case
    for(int index=n-1;index>=0;index--){
        for(int buy=0;buy<=1;buy++){
           if(buy){
               curr[buy]= max((-prices[index]+front1[0]),
                            0+front1[1]);
            }

            //there can be case when index can go to n+1
            else{
                curr[buy]=max((prices[index]+front2[1]),
                            0+front1[0]);
            } 
        }
        front2=front1;
        front1=curr;
    }
    return front1[1];



    //tabulation
    // vector<vector<int>>dp(n+2,vector<int>(2,0));
    // //base case is already 0 so we do not need to do anything for base case
    // for(int index=n-1;index>=0;index--){
    //     for(int buy=0;buy<=1;buy++){
    //        if(buy){
    //            dp[index][buy]= max((-prices[index]+dp[index+1][0]),
    //                         0+dp[index+1][1]);
    //         }

    //         //there can be case when index can go to n+1
    //         else{
    //             dp[index][buy]=max((prices[index]+dp[index+2][1]),
    //                         0+dp[index+1][0]);
    //         } 
    //     }
    // }
    // return dp[0][1];



    //memoization
    // vector<vector<int>>dp(n+2,vector<int>(2,-1));
    // return f(0,1,n,prices,dp);

}