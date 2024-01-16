
vector<int> getSecondOrderElements(int n, vector<int> a) {


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     int maxi=INT_MIN,mini=INT_MAX;
    int secMax=INT_MIN,secMin=INT_MAX;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
        if(a[i]<mini){
            mini=a[i];
        }
    }
    
    
    for(int i=0;i<n;i++){
        if(a[i]<maxi){
            secMax=max(secMax,a[i]);
        }
        if(a[i]>mini){
            secMin=min(a[i],secMin);
        }
    }
    ans.push_back(secMax);
    ans.push_back(secMin);
    return ans;




}
