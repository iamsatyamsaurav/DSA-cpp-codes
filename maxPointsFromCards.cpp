int maxPoints(vector<int>&arr , int k){

    int n = arr.size();
    int lsum=0,rsum=0,maxSum=0;
    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }  
    maxSum=lsum;
    int rindex=n-1;
    for(int i=k-1;i>=0;i--){
        lsum-=arr[i];
        rsum+=arr[rindex];
        rindex--;
        maxSum=max(maxSum,lsum+rsum);
    }
    return maxSum;

}