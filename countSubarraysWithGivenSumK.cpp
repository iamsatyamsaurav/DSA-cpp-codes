int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    //brute force

    // int n=arr.size();
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //         if(sum==k){
    //             count++;
    //             break;
    //         }
    //     }
    // }
    // return count;

    //optimal approach----->prefix sum

    unordered_map<int,int>mp;
    int presum=0;
    int count=0;
    mp[0]=1;
    for(int i=0;i<arr.size();i++){
        presum+=arr[i];
        int remove=presum-k;
        count=count+mp[remove];
        mp[presum]++;
    }
    return count;
}