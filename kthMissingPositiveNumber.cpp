int missingK(vector < int > vec, int n, int k) {

    //Binary search approach
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfMissingNos=vec[mid]-(mid+1);
        if(noOfMissingNos<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    //now s and e will be indicating the range where the kth missing number will be present
    return s+k;







    //Brute force
    // int ans=-1;
    // int count=0;
    // for(int i=1;i<INT_MAX;i++){
    //     //element is missing
    //     if(find(vec.begin(),vec.end(),i)==vec.end()){
    //         count++;
    //         ans=i;
    //         if (count == k) {
    //           return ans;
    //         }
    //     }
    // }
}
