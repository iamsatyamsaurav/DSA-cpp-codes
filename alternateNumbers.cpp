vector<int> alternateNumbers(vector<int>&a) {
    int n=a.size();
    vector<int>ans(n,0);
    int k=0;//for positive number
    int j=1;//for negative number
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans[k]=a[i];
            k+=2;
        }
        if(a[i]<0){
            ans[j]=a[i];
            j+=2;
        }
    }
    return ans;
}