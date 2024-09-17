#include<bits/stdc++.h>
//ZERO BASED INDEXING
// bool f(int i,int j,string &s,string &t){
//    if(i<0 && j<0){
//       return true;
//    }
//    if(i<0 && j>=0){
//       return false;
//    }
//    if(i>=0 && j<0){
//       for(int element=0;element<=i;element++){
//          if(s[element]!='*'){
//             return false;
//          }
//       }
//       return true;
//    }


//    if(s[i]==t[j] || s[i]=='?'){
//       //matched
//       return f(i-1,j-1,s,t);
//    }
//    else if(s[i]=='*'){
//       return f(i-1,j,s,t)||f(i,j-1,s,t);
//    }
//    else{
//       return false;
//    }
// }

//ONE BASED INDEXING
bool f(int i,int j,string &s,string &t,vector<vector<int>>&dp){
   if(i==0 && j==0){
      return true;
   }
   if(i==0 && j>=1){
      return false;
   }
   if(i>=1 && j==0){
      for(int element=1;element<=i;element++){
         if(s[element-1]!='*'){
            return false;
         }
      }
      return true;
   }
   if(dp[i][j]!=-1){
      return dp[i][j];
   }

   if(s[i-1]==t[j-1] || s[i-1]=='?'){
      //matched
      return dp[i][j]=f(i-1,j-1,s,t,dp);
   }
   else if(s[i-1]=='*'){
      return dp[i][j]=f(i-1,j,s,t,dp)||f(i,j-1,s,t,dp);
   }
   else{
      return dp[i][j]=false;
   }
}
bool wildcardMatching(string s, string t)
{
   int n=s.size();
   int m=t.size();
   //space optimisation
   vector<bool>prev(m+1,0),curr(m+1,0);
   prev[0]=1;
   for(int j=1;j<=m;j++){
      prev[j]=0;
   }

   for(int i=1;i<=n;i++){
      bool flag=1;
      for(int element=1;element<=i;element++){
         if(s[element-1]!='*'){
            flag=0;
            
         }
      }
      curr[0]=flag;
      for(int j=1;j<=m;j++){
         if(s[i-1]==t[j-1] || s[i-1]=='?'){
            //matched
            curr[j]=prev[j-1];
         }
         else if(s[i-1]=='*'){
            curr[j]=prev[j]||curr[j-1];
         }
         else{
            curr[j]=false;
         }
      }
      prev=curr;
   }
   return prev[m];


   //tabulation
   // vector<vector<bool>>dp(n+1,vector<bool>(m+1,0));
   // dp[0][0]=1;
   // for(int j=1;j<=m;j++){
   //    dp[0][j]=0;
   // }
   // for(int i=1;i<=n;i++){
   //    bool flag=1;
   //    for(int element=1;element<=i;element++){
   //       if(s[element-1]!='*'){
   //          flag=0;
            
   //       }
   //    }
   //    dp[i][0]=flag;
   // }
   // for(int i=1;i<=n;i++){
   //    for(int j=1;j<=m;j++){
   //       if(s[i-1]==t[j-1] || s[i-1]=='?'){
   //          //matched
   //          dp[i][j]=dp[i-1][j-1];
   //       }
   //       else if(s[i-1]=='*'){
   //          dp[i][j]=dp[i-1][j]||dp[i][j-1];
   //       }
   //       else{
   //          dp[i][j]=false;
   //       }
   //    }
   // }
   // return dp[n][m];

   //memoization
   // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
   // return f(n,m,s,t,dp);
}
