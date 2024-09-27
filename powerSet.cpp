#include <bits/stdc++.h> 
// void f(int index,int n,vector<int>&arr,vector<int>temp,vector<vector<int>>&ans){

//     if(index>=n){
//         ans.push_back(temp);
//         return;
//     }
    
//     //not pick
//     f(index+1,n,arr,temp,ans);

//     //pick
//     int element=arr[index];
//     temp.push_back(element);
//     f(index+1,n,arr,temp,ans);
// }
vector<vector<int>> pwset(vector<int>v)
{
    //Power set
    vector<vector<int>>ans;
    int n=v.size();
    int totalSusbsets=1<<n;
    for(int i=0;i<totalSusbsets;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                temp.push_back(v[j]);
            }
        }
        ans.push_back(temp);
    }
    sort(ans.begin(),ans.end());
    return ans;



    //Recursion

    // vector<vector<int>>ans;
    // vector<int>temp;
    // int n=v.size();
    // f(0,n,v,temp,ans);
    // return ans;
}