// bool isPossibleSolution(vector<int>& arr, int n, int m, int mid){
//     int studentCount=1;
//     int pageSum=0;
//     if(m>n){
//         return false;
//     }
//     for(int i=0;i<n;i++){
//        if(pageSum+arr[i]<=mid){
//            pageSum+=arr[i];
//        }
//        else{
//            studentCount++;
//            if(studentCount>m||arr[i]>mid){
//                return  false;
//            }
//            pageSum=arr[i];
//        }
//     }
    
//     return true;
// }
int findMax(vector<int>arr){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;

}
int findSum(vector<int>arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    return sum;
}
int findStudents(vector<int>arr,int n,int maxPages){
    int studentCount=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=maxPages){
            pages=pages+arr[i];
        }
        else{
            studentCount++;
            pages=arr[i];
        }
    }
    return studentCount;
}
int findPages(vector<int>& arr, int n, int m) {

    if(m>n){
        return -1;
    }
    int ans=0;
    int s=findMax(arr);
    int e=findSum(arr);
    while(s<=e){
        int mid=s+(e-s)/2;
        int noOfStudents=findStudents(arr,n,mid);
        if(noOfStudents>m){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
       
    }
    return ans;


 // int s=0,e,sum=0,mid=1,ans=-1;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // e=sum;
    // while(s<=e){
    //     mid=s+(e-s)/2;
    //     if(isPossibleSolution(arr,n,m,mid)){
    //         ans=mid;
    //         e=mid-1;
    //     }
    //     else{
    //         s=mid+1;
    //     }
    // }
    // return ans;
}