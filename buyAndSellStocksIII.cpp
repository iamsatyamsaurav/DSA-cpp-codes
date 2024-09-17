int f(int index,int buy,int cap,vector<int>& prices,int n,vector<vector<vector<int>>>&dp){
    if(index==n || cap==0){
        return 0;
    }
    if(dp[index][buy][cap]!=-1){
        return dp[index][buy][cap];
    }
    if(buy){
        return dp[index][buy][cap]= max((-prices[index]+f(index+1,0,cap,prices,n,dp)),
                    0+f(index+1,1,cap,prices,n,dp));
    }
    else{
        return dp[index][buy][cap]=max((prices[index]+f(index+1,1,cap-1,prices,n,dp)),
                    0+f(index+1,0,cap,prices,n,dp));
    }
}
int maxProfit(vector<int>& prices)
{
   int n=prices.size();
    //space optimisation
    vector<vector<int>>ahead(2,vector<int>(3,0)),curr(2,vector<int>(3,0));
   //base case alredy 0;
   for(int index=n-1;index>=0;index--){
       for(int buy=0;buy<=1;buy++){
           for(int cap=1;cap<=2;cap++){
             if(buy){
                curr[buy][cap]= max((-prices[index]+ahead[0][cap]),
                            0+ahead[1][cap]);
            }
            else{
                curr[buy][cap]=max((prices[index]+ahead[1][cap-1]),
                            0+ahead[0][cap]);
            }  
           }
       }
       ahead=curr;
   }
   return ahead[1][2];

//tabulation
//    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
//    //base case alredy 0;
//    for(int index=n-1;index>=0;index--){
//        for(int buy=0;buy<=1;buy++){
//            for(int cap=1;cap<=2;cap++){
//              if(buy){
//                 dp[index][buy][cap]= max((-prices[index]+dp[index+1][0][cap]),
//                             0+dp[index+1][1][cap]);
//             }
//             else{
//                 dp[index][buy][cap]=max((prices[index]+dp[index+1][1][cap-1]),
//                             0+dp[index+1][0][cap]);
//             }  
//            }
//        }
//    }
//    return dp[0][1][2];



//    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
//    return f(0,1,2,prices,n,dp);
}