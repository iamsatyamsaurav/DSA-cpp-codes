void solve(vector<int> &a,int n,int k,long sum,int index,bool &flag){
   
    if(sum==k){
        flag=true;
        return;
    }
    if(index>=n || sum>k){
        return;
    }
   sum+=a[index];
    solve(a,n,k,sum,index+1,flag);
      if(flag){
        return;
    }
    sum-=a[index];
  
    solve(a,n,k,sum,index+1,flag);
    return;
}
bool isSubsetPresent(int n, int k, vector<int> &a) {

    int index=0;
    long sum=0;
    bool flag=false;
    solve(a,n,k,sum,index,flag);
    return flag;
    
}