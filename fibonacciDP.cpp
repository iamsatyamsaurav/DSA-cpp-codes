#include<vector>
#include<iostream>
using namespace std;
int fib(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
int main(){

    
    // vector<int>dp(4+1,-1);
    // cout<<fib(4,dp);

     int prev2=0;
    int prev=1;
    for(int i=2;i<=4;i++){
        int curri=prev+prev2;
        prev2=prev;
        prev=curri;
    }
    cout<<prev<<endl;
    return 0;
}

// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){

//     cout<<fib(5);
//     return 0;
// }