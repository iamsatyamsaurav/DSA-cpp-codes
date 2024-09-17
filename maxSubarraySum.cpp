long long maxSubarraySum(vector<int> arr, int n)
{  //kadanes algo
    
     long long maxi=LONG_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    //since if sum is negative we need to return 0
    if(maxi<0){
        maxi=0;
    }
    return maxi;







    // int i=0,j=0;
    // long long maxSum=0;
    // for(int i=0;i<n;i++){
    //     long long sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //         maxSum=max(sum,maxSum);
    //     }
    // }
    // return maxSum;

}