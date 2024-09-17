int mod=(int)(1e9+7);
int f(int i,int j,vector< vector< int> > &mat,vector<vector<int>>&dp){
    if(i>=0 && j>=0 && mat[i][j]==-1){ //for dead cell
        return 0;
    }
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=f(i-1,j,mat,dp);
    int left=f(i,j-1,mat,dp);
    return dp[i][j]=(up+left)%mod;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {

    //space optimisation
    vector<int>prev(m,0);
    for(int i=0;i<n;i++){
        vector<int>curr(m,0);
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1){
                curr[j]=0;
            }
            else if(i==0 && j==0){
                curr[j]=1;
            }
            else{
                int up=0;
                int left=0;
                if(i>0){
                    up=prev[j];
                }
                if(j>0){
                    left=curr[j-1];
                }
                curr[j]=(up+left)%mod;
            }
        }
        prev=curr;
    }
    return prev[m-1];
    

    //tabulation
    // vector<vector<int>>dp(n,vector<int>(m,-1));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(mat[i][j]==-1){
    //             dp[i][j]=0;
    //         }
    //         else if(i==0 && j==0){
    //             dp[i][j]=1;
    //         }
    //         else{
    //             int up=0;
    //             int left=0;
    //             if(i>0){
    //                 up=dp[i-1][j];
    //             }
    //             if(j>0){
    //                 left=dp[i][j-1];
    //             }
    //             dp[i][j]=(up+left)%mod;
    //         }
    //     }
    // }
    // return dp[n-1][m-1];

    //memoization
    // vector<vector<int>>dp(n,vector<int>(m,-1));
    // return f(n-1,m-1,mat,dp);


    // return f(n-1,m-1,mat);
   
}