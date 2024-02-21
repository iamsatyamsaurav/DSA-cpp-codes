int findMax(vector<int>arr){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int sum(vector<int>arr){
    int s=0;
    for(int i=0;i<arr.size();i++){
        s=s+arr[i];
    }
    return s;
}
int findDays(vector<int>weights,int capacity){
    int load=0;
    int days=1;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]<=capacity){
            load=load+weights[i];
        }
        else{
            days++;
            load=weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int s=findMax(weights);
    int e=sum(weights);
    int ans=e;
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfDays=findDays(weights,mid);
        if(noOfDays>d){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
}