bool isPossible(int minDis,vector<int>arr,int cows){
    int count=1;
    int lastCow=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-lastCow>=minDis){
            count++;
            lastCow=arr[i];
            if(count>=cows){
                return true;
            }
        }
       
    }
     return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int s=1;
    int e=stalls[n-1]-stalls[0];
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(mid,stalls,k)){
            ans=mid;
            s=mid+1; //as we have to find the max of min distance
        }
        else{
            e=mid-1;
        }
    }
    return ans;


   // int limit=stalls[n-1]-stalls[0];
    // for(int i=1;i<=limit;i++){
    //     if(isPossible(i,stalls,k)){
    //         continue;;
    //     }
    //     else{
    //         return i-1;
    //     }
    // }
    // return limit;
}