#include <bits/stdc++.h> 
int f(int i,int j,string &s,string &t,vector<vector<int>>&dp){
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j])
    return dp[i][j]=1+f(i-1,j-1,s,t,dp);
    return dp[i][j]=max(f(i,j-1,s,t,dp),f(i-1,j,s,t,dp));
}
int getLengthOfLCS(string & s, string & t) {
  // Write your code here.
  int n=s.size();
  int m=t.size();

  vector<vector<int>>dp(n,vector<int>(m,-1));
  return f(n-1,m-1,s,t,dp);
}
int canYouMake(string &s1, string &s2){
    int n=s1.size();
    int m=s2.size();
    int minOperations=n+m-(2*getLengthOfLCS(s1,s2));
    return minOperations;
}