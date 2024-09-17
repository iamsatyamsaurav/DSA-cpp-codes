#include <bits/stdc++.h> 
// int f(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){
//     if(i==0 && j==0){
//         return grid[i][j];
//     }
//     if(i<0 || j<0){
//         return 1e9; //because we will never select this path
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     int up=grid[i][j]+f(i-1,j,grid,dp);
//     int left=grid[i][j]+f(i,j-1,grid,dp);
//     return dp[i][j]=min(up,left);
// }
int minSumPath(vector<vector<int>> &grid) {
   int n=grid.size();
   int m=grid[0].size();

    //space optimisation
     vector<int>prev(m,0);
   for(int i=0;i<n;i++){
       vector<int>curr(m,0);
       for(int j=0;j<m;j++){
           if(i==0 && j==0){
               curr[j]=grid[0][0]; //base case
           }
           else{
               int up=grid[i][j];
               if(i>0){
                   up=up+prev[j];
               }
               else{
                   up=up+1e9;
               }
               int left=grid[i][j];
               if(j>0){
                   left=left+curr[j-1];
               }
               else{
                   left=left+1e9;
               }
               curr[j]=min(up,left);
           }
           
       }
       prev=curr;
   }
   return prev[m-1];


   //tabulation
//    vector<vector<int>>dp(n,vector<int>(m,-1));
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(i==0 && j==0){
//                dp[i][j]=grid[0][0]; //base case
//            }
//            else{
//                int up=grid[i][j];
//                if(i>0){
//                    up=up+dp[i-1][j];
//                }
//                else{
//                    up=up+1e9;
//                }
//                int left=grid[i][j];
//                if(j>0){
//                    left=left+dp[i][j-1];
//                }
//                else{
//                    left=left+1e9;
//                }
//                dp[i][j]=min(up,left);
//            }
           
//        }
//    }
//    return dp[n-1][m-1];


   //memoization
//    vector<vector<int>>dp(n,vector<int>(m,-1));
//    return f(n-1,m-1,grid,dp);
}