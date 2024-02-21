int findMin(vector<int>arr){
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
int findMax(vector<int>arr){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int findBouq(vector<int>arr,int day,int k,int m){
    int count=0;
    int num=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            count++;
        }
        else{
            num=num+(count/k);
            count=0;
        }
    }
    num=num+(count/k); //for end of the array case
    return num;
}
int roseGarden(vector<int> arr, int k, int m)
{
    int n=arr.size();
    if(m*k>n){
        return -1;
    }
	int s=findMin(arr);
    int e=findMax(arr);
    int ans=56;
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfBouq=findBouq(arr,mid,k,m);
        if(noOfBouq>=m){
            ans=mid;
            e=mid-1;
        }
        else if(noOfBouq<m){
            s=mid+1;
        }
       
    }
    return ans;
}