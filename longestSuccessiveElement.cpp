int longestSuccessiveElements(vector<int>&a) {
    


    //better approach
    //t.c=nlogn+n
    //s.c=1
    if(a.size()==1){
        return 1;
    }
    sort(a.begin(),a.end());
    int count=1,maxi=INT_MIN;
    
    for(int i=0;i<a.size()-1;i++){
        if(a[i+1]-a[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else if(a[i+1]-a[i]==0){
            continue;
        }
        else{
            count=1;
        }
    }
    return maxi;
}