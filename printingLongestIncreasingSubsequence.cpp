#include<bits/stdc++.h>
// int f(int index,int prev_index,int arr[],int n){
//     if(index==n){
//         return 0;
//     }
    
//     int notPick=0+f(index+1,prev_index,arr,n);
//     int pick=0;
//     if(prev_index==-1 || arr[index]>arr[prev_index]){
//         pick=1+f(index+1,index,arr,n);
//     }
//     return max(notPick,pick);
// }

//shifted index
int f(int index,int prev_index,int arr[],int n,vector<vector<int>>&dp){
    if(index==n){
        return 0;
    }
    if(dp[index][prev_index+1]!=-1){
        return dp[index][prev_index+1];
    }
    int notPick=0+f(index+1,prev_index,arr,n,dp);
    int pick=0;
    if(prev_index==-1 || arr[index]>arr[prev_index]){
        pick=1+f(index+1,index,arr,n,dp);
    }
    return dp[index][prev_index+1]=max(notPick,pick);
}
int longestIncreasingSubsequence(int arr[], int n)
{
    //method 2

    //for length of LIS
    // int maxi=0;
    // vector<int>dp(n,1); //dp[i] will signify the length of longest increasing subsequence ending at index i
    // for(int index=0;index<n;index++){
    //     for(int prev=0;prev<index;prev++){
    //         if(arr[prev]<arr[index]){
    //             dp[index]=max(dp[index],1+dp[prev]);
    //         }
    //     }
    //     maxi=max(dp[index],maxi);
    // }
    // return maxi;

    // for printing LIS
    int maxi=0;
    int maxIndex=-1;
    vector<int>dp(n,1); //dp[i] will signify the length of longest increasing subsequence ending at index i
    vector<int>hash(n);
    for(int index=0;index<n;index++){
        hash[index]=index;
        for(int prev=0;prev<index;prev++){
            if(arr[prev]<arr[index] && dp[index]<dp[prev]+1){
                dp[index]=dp[prev]+1;
                hash[index]=prev;
            }
        }
        if(maxi<dp[index]){
            maxi=dp[index];
            maxIndex=index;
        }
    }
    vector<int>ans;
    ans.push_back(arr[maxIndex]);
    int lastIndex=maxIndex;
    while(hash[lastIndex]!=lastIndex){
        
        lastIndex=hash[lastIndex];
        ans.push_back(arr[lastIndex]);
        
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return maxi;


    //space optimisation
    // vector<int>ahead(n+1,0),curr(n+1,0);
    // //base case is already 0
    // for(int index=n-1;index>=0;index--){
    //     for(int prev_index=index-1;prev_index>=-1;prev_index--){
    //         int notPick=0+ahead[prev_index+1];
    //         int pick=0;
    //         if(prev_index==-1 || arr[index]>arr[prev_index]){
    //             pick=1+ahead[index+1];
    //         }
    //         curr[prev_index+1]=max(notPick,pick);
    //     }
    //     ahead=curr;
    // }
    // return ahead[0];

    //tabulation
    // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    // //base case is already 0
    // for(int index=n-1;index>=0;index--){
    //     for(int prev_index=index-1;prev_index>=-1;prev_index--){
    //         int notPick=0+dp[index+1][prev_index+1];
    //         int pick=0;
    //         if(prev_index==-1 || arr[index]>arr[prev_index]){
    //             pick=1+dp[index+1][index+1];
    //         }
    //         dp[index][prev_index+1]=max(notPick,pick);
    //     }
    // }
    // return dp[0][0];

    //memoization
    // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    // return f(0,-1,arr,n,dp);
}
