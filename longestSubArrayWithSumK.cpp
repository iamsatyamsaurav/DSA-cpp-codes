int longestSubarrayWithSumK(vector<int> a, long long k) {
    
    //optimal
    int left=0,right=0,maxi=0,n;
    n=a.size();
    long long sum=a[left];
    while(right<n){
        while(left<=right && sum>k ){
            sum=sum-a[left];
            left++;
        }
        if(sum==k){
            maxi=max(maxi,right-left+1);

        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }
    return maxi;






    // int len=0,maxLen=0;
    // int n=a.size();
    // for(int i=0;i<n;i++){
    //     long long sum=0;
    //     for(int j=i;j<n;j++){
            
    //         sum=sum+a[j];
    //         if(sum==k){
    //             len=j-i+1;
    //             maxLen=max(len,maxLen);
                
    //         }
    //     }
    // }
    // return maxLen;
}