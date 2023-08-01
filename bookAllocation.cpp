bool isPossibleSolution(vector<int>& arr, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;
    if(m>n){
        return false;
    }
    for(int i=0;i<n;i++){
       if(pageSum+arr[i]<=mid){
           pageSum+=arr[i];
       }
       else{
           studentCount++;
           if(studentCount>m||arr[i]>mid){
               return  false;
           }
           pageSum=arr[i];
       }
    }
    
    return true;
}

int findPages(vector<int>& arr, int n, int m) {

    int s=0,e,sum=0,mid=1,ans=-1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    e=sum;
    while(s<=e){
        mid=s+(e-s)/2;
        if(isPossibleSolution(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}