#include <bits/stdc++.h> 


long long merge(long long* arr,int low, int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    long long count=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count+=mid-left+1;
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return count;
}
long long mergeSort(long long *arr, int low, int high){
    long long count=0;
    if(low>=high){
        return count;
    }
    int mid=(low+high)/2;

    
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}
long long getInversions(long long *arr, int n){
    int low=0;
    int high=n-1;
    return mergeSort(arr,low,high);








//     long long count=0;
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[i]>arr[j] && i<j){
//                count++;
//            }
//        }
//    }
//    return count;

}