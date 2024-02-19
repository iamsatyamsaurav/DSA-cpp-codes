#include<climits>
int findKRotation(vector<int> &arr){
    //answer is the index of the minimum element
    int n=arr.size();
    int s=0,e=n-1,ans=INT_MAX;
    int index=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        //left half sorted
        if(arr[s]<=arr[mid]){
            if(arr[s]<ans){
                ans=arr[s];
                index=s;
            }
            s=mid+1;
        }
        else{
            //right half sorted
            // ans=min(mid,ans);
            if(arr[mid]<ans){
                ans=arr[mid];
                index=mid;
            }
            e=mid-1;
        }
    }   
    return index;
}