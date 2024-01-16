vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
     vector<int>arr2(n,0);
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[(i+(n-k))%n]=arr2[i];
    }
    return arr;
}
