#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    int sum=0;
    int maxSum=INT_MIN;
    int start=0,end=0,tempStart=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
       
        sum+=arr[i];
        if(sum>maxSum){
            maxSum=sum;
            start=tempStart;
            end=i;
        }
        if(sum<0){
            sum=0;
             tempStart=i+1;
        }
    }
    for(int i=start;i<=end;i++){
        ans.push_back(arr[i]);
    }
    return ans;

}
