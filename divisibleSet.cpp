vector<int> divisibleSet(vector<int> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>dp(n,1);
    vector<int>hash(n);
    int maxi=0;
    int maxIndex=-1;
    for(int i=0;i<n;i++){
        hash[i]=i;

        for(int prev=0;prev<i;prev++){
            if(arr[i]%arr[prev]==0 && 1+dp[prev]>dp[i]){
                dp[i]=1+dp[prev];
                hash[i]=prev;
            }
        }
        if(maxi<dp[i]){
            maxi=dp[i];
            maxIndex=i;
        }
    }
    vector<int>ans;
    int lastIndex=maxIndex;
    ans.push_back(arr[lastIndex]);
    while(hash[lastIndex]!=lastIndex){
        lastIndex=hash[lastIndex];
        ans.push_back(arr[lastIndex]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}