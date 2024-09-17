#include <bits/stdc++.h> 
// int f(int i,int j,vector<vector<int>> &matrix,vector<vector<int>> &dp){  //max path sum to reach (i,j) starting from any cell in the first row
//     if(j<0 || j>=matrix[0].size()){
//         return -1e9; //as we will not take this path
//     }
//     if(i==0){
//         return matrix[i][j];
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }

//     int up=matrix[i][j]+f(i-1,j,matrix,dp);
//     int rightDiagonal=matrix[i][j]+f(i-1,j+1,matrix,dp);
//     int leftDiagonal=matrix[i][j]+f(i-1,j-1,matrix,dp);
//     return dp[i][j]=max(up,max(rightDiagonal,leftDiagonal));
// }
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();

    //space optimisation
    vector<int>prev(m,0);
    for(int j=0;j<m;j++){
        prev[j]=matrix[0][j];
    }
     for(int i=1;i<n;i++){
         vector<int>curr(m,0);
        for(int j=0;j<m;j++){
            int up=matrix[i][j]+prev[j];
            int rightDiagonal=matrix[i][j];
            if(j+1<m){
                rightDiagonal+=prev[j+1];
            }
            else{
                rightDiagonal+=-1e9;
            }
            int leftDiagonal=matrix[i][j];
            if(j-1>=0){
                leftDiagonal+=prev[j-1];
            }
            else{
                leftDiagonal+=-1e9;
            }
            curr[j]=max(up,max(rightDiagonal,leftDiagonal));

        }
        prev=curr;
    }

    int maxi=INT_MIN;
    for(int j=0;j<m;j++){
        maxi=max(maxi,prev[j]);
    }
    return maxi;


    //tabulation
    // vector<vector<int>>dp(n,vector<int>(m,0));
    // for(int j=0;j<m;j++){
    //     dp[0][j]=matrix[0][j];
    // }
    // for(int i=1;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         int up=matrix[i][j]+dp[i-1][j];
    //         int rightDiagonal=matrix[i][j];
    //         if(j+1<m){
    //             rightDiagonal+=dp[i-1][j+1];
    //         }
    //         else{
    //             rightDiagonal+=-1e9;
    //         }
    //         int leftDiagonal=matrix[i][j];
    //         if(j-1>=0){
    //             leftDiagonal+=dp[i-1][j-1];
    //         }
    //         else{
    //             leftDiagonal+=-1e9;
    //         }
    //         dp[i][j]=max(up,max(rightDiagonal,leftDiagonal));

    //     }
    // }

    // int maxi=INT_MIN;
    // for(int j=0;j<m;j++){
    //     maxi=max(maxi,dp[n-1][j]);
    // }
    // return maxi;

    //memoization
    // vector<vector<int>>dp(n,vector<int>(m,-1));
    // int maxi=INT_MIN;
    // for(int j=0;j<m;j++){
    //     maxi=max(maxi,f(n-1,j,matrix,dp));
    // }
    // return maxi;
}