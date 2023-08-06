#include<iostream>
using namespace std;
int solve(int *arr,int s,int e, int k){
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    return mid;
    if(s>e)
    return -1;
 
    if(arr[mid]<k)
    return solve(arr,mid+1,e,k);
    else
    return solve(arr,s,mid-1,k);
}

// int binarySearch(int *input,int n,int val){
//     int ans=solve(input,0,n-1,val);
//     return ans;
// }
int main(){
    int arr[6]={1,3,6,9,11,15}; //array should be sorted
    int ans=solve(arr,0,5,10);
    cout<<ans<<endl;
}