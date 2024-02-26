#include<bits/stdc++.h>
int findMax(vector<int>arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int findSum(vector<int>arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int findSubarrays(vector<int>arr,int maxSum){
    int n=arr.size();
    int num=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=maxSum){
            sum+=arr[i];
        }
        else{
            num++;
            sum=arr[i];
        }
    }
    return num;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    int ans=-1;
    int n=a.size();
    int s=findMax(a,n);
    int e=findSum(a,n);
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfSubarrays=findSubarrays(a,mid);
        if(noOfSubarrays<=k){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}