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
int findPainters(vector<int>arr,int maxTime){
    int n=arr.size();
    int num=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=maxTime){
            sum+=arr[i];
        }
        else{
            num++;
            sum=arr[i];
        }
    }
    return num;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int s=findMax(boards,n);
    int e=findSum(boards,n);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfPainters=findPainters(boards,mid);
        if(noOfPainters<=k){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;

}