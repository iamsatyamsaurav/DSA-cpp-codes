#include<bits/stdc++.h>
//ZERO BASED INDEXING
// int f(int i,int j,string &s,string &t){
//     //base case
//     if(i<0){
//         return j+1;
//     }
//     if(j<0){
//         return i+1;
//     }

//     //matches
//     if(s[i]==t[j])
//     return 0+f(i-1,j-1,s,t);

//     //not matches
//     else{
//         int insertion=1+f(i,j-1,s,t);
//         int deletion=1+f(i-1,j,s,t);
//         int replace=1+f(i-1,j-1,s,t);
//         return min(insertion,min(deletion,replace));
//     }
// }

//ONE BASED INDEXING
int f(int i,int j,string &s,string &t,vector<vector<int>>&dp){
    //base case
    if(i==0){
        return j;
    }
    if(j==0){
        return i;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    //matches
    if(s[i-1]==t[j-1])
    return dp[i][j]=0+f(i-1,j-1,s,t,dp);

    //not matches
    else{
        int insertion=1+f(i,j-1,s,t,dp);
        int deletion=1+f(i-1,j,s,t,dp);
        int replace=1+f(i-1,j-1,s,t,dp);
        return dp[i][j]= min(insertion,min(deletion,replace));
    }
    

}
int editDistance(string s, string t)
{
    int n=s.size();
    int m=t.size();
    //space optimisation
    vector<int>prev(m+1,0),curr(m+1,0);
        for(int j=0;j<=m;j++){
            prev[j]=j;
        }
        
        for(int i=1;i<=n;i++){
            curr[0]=i;
            for(int j=1;j<=m;j++){
                 //matches
                if(s[i-1]==t[j-1])
                curr[j]=0+prev[j-1];

                //not matches
                else{
                    int insertion=1+curr[j-1];
                    int deletion=1+prev[j];
                    int replace=1+prev[j-1];
                    curr[j]= min(insertion,min(deletion,replace));
                }
            }
            prev=curr;
        }
        return prev[m];


    //tabulation
    // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    //     for(int j=0;j<=m;j++){
    //         dp[0][j]=j;
    //     }
    //     for(int i=0;i<=n;i++){
    //         dp[i][0]=i;
    //     }

    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=m;j++){
    //              //matches
    //             if(s[i-1]==t[j-1])
    //             dp[i][j]=0+dp[i-1][j-1];

    //             //not matches
    //             else{
    //                 int insertion=1+dp[i][j-1];
    //                 int deletion=1+dp[i-1][j];
    //                 int replace=1+dp[i-1][j-1];
    //                 dp[i][j]= min(insertion,min(deletion,replace));
    //             }
    //         }
    //     }
    //     return dp[n][m];
    

    //memoization
    // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    // return f(n,m,s,t,dp);
}