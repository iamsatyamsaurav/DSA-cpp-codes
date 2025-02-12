class Solution {
public:
    // int f(int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp){
    //     int n=matrix.size();
    //     if(j<0 || j>n-1){
    //         return 1e9;
    //     }
    //     if(i==0){
    //         return matrix[i][j];
    //     }
    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     int leftdiagonal=matrix[i][j]+f(i-1,j-1,matrix,dp);
    //     int up=matrix[i][j]+f(i-1,j,matrix,dp);
    //     int rightdiagonal=matrix[i][j]+f(i-1,j+1,matrix,dp);
    //     return dp[i][j]=min(leftdiagonal,min(up,rightdiagonal));
    // }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // int mini=INT_MAX;
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // for(int i=0;i<n;i++){
        //     mini=min(mini,f(n-1,i,matrix,dp));
        // }
        // return mini;

        int mini=INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up=matrix[i][j]+dp[i-1][j];
                int leftdiagonal=matrix[i][j];
                if(j>0){
                    leftdiagonal+=dp[i-1][j-1];
                }
                else{
                    leftdiagonal+=1e9;
                }
                int rightdiagonal=matrix[i][j];
                if(j<n-1){
                    rightdiagonal+=dp[i-1][j+1];
                }
                else{
                    rightdiagonal+=1e9;
                }
                dp[i][j]=min(up,min(leftdiagonal,rightdiagonal));
            }
        }

        for(int j=0;j<n;j++){
            mini=min(dp[n-1][j],mini);
        }
        return mini;
    }
};