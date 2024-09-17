int f(int index,int W,vector<int> &value, vector<int> &weight,vector<vector<int>>&dp){
    if(index==0){
        if(weight[0]<=W){
            return (W/weight[0])*value[0];
        }else{
            return 0;
        }
    }
    if(dp[index][W]!=-1){
        return dp[index][W];
    }
    int notPick=0+f(index-1,W,value,weight,dp);
    int pick=-1e9;
    if(weight[index]<=W){
        pick=value[index]+f(index,W-weight[index],value,weight,dp);
    }
    return dp[index][W]=max(notPick,pick);
}
int unboundedKnapsack(int n, int w, vector<int> &value, vector<int> &weight){
    //tabulation
    vector<vector<int>>dp(n,vector<int>(w+1,0));
    for(int W=weight[0];W<=w;W++){
        dp[0][W]=(W/weight[0])*value[0];
    }
    for(int index=1;index<n;index++){
        for(int W=0;W<=w;W++){
            int notPick=0+dp[index-1][W];
            int pick=-1e9;
            if(weight[index]<=W){
                pick=value[index]+dp[index][W-weight[index]];
            }
            dp[index][W]=max(notPick,pick);
        }
    }
    return dp[n-1][w];

    //memoization
    // vector<vector<int>>dp(n,vector<int>(w+1,-1));
    // return f(n-1,w,value,weight,dp);
}