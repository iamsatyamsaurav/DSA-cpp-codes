int subarraysWithXorK(vector < int > a, int b) {
    //optimal------>prexor

    unordered_map<int,int>mp;
    mp[0]=1;
    int xr=0;
    int count=0;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        int x=xr^b;
        count+=mp[x];
        mp[xr]++;
    }
    return count;





    // int n=a.size();
    // int x;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     x=0;
    //     for(int j=i;j<n;j++){
    //         x=x^a[j];
    //         if(x==b){
    //             count++;
    //         }
    //     }
    // }
    // return count;
}