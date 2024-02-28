int upperBound(vector<int>arr,int element){
    //finding the first number greater than element 
    int s=0;
    int e=arr.size()-1;
    int ans=arr.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>element){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int findNumber(vector<vector<int>> &matrix,int element){
    int m=matrix.size();
    int count=0;
    for(int i=0;i<m;i++){
        count+=upperBound(matrix[i],element);
    }
    return count;

}
int median(vector<vector<int>> &matrix, int m, int n) {
    //optimal:
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<m;i++){
        mini=min(mini,matrix[i][0]);
        maxi=max(maxi,matrix[i][n-1]);
    }
    int s=mini;
    int e=maxi;
    int req=(m*n)/2;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfNumLessThanEqualToMid=findNumber(matrix,mid);
        if(noOfNumLessThanEqualToMid>req){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;




    //brute force:
    // vector<int>ans;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         ans.push_back(matrix[i][j]);
    //     }
    // }

    // sort(ans.begin(),ans.end());
    // int s=0;
    // int e=(m*n)-1;
    // int mid=s+(e-s)/2;
    // return ans[mid];

}