vector<int> findMissingRepeatingNumbers(vector < int > a) {
    vector<int>ans;
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    //finding the first differentiating bit form right
    int bitPos=0;
    while(1){
        if((1<<bitPos & xr)!=0){
            break;
        }
        bitPos++;
    }
    //clubing the array elements the numbers from 1 to n
    //into clubs with 0 at bitPos and 1  at bitPos
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if((a[i] & 1<<bitPos)!=0){
            one=one^a[i];
        }
        else{
            zero=zero^a[i];
        }
    }
    for(int i=1;i<=n;i++){
        if((i & 1<<bitPos)!=0){
            one=one^i;
        }
        else{
            zero=zero^i;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero){
            count++;
        }
    }
    if(count==2){
        ans={zero,one};
    }
    else if(count==0){
        ans={one,zero};
    }
    return ans;
}