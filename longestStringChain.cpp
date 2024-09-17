bool check(string &s1,string &s2){
    if(s1.size()-1!=s2.size()){
        return false;
    }
    int i=0; //corresponds to longer string
    int j=0;
    while(i<s1.size()){
        if(j<s2.size()&&s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(i==s1.size() && j==s2.size()){
        return true;
    }
    else{
        return false;
    }
}
bool comp(string &s1,string &s2){
    return s1.size()<s2.size();
}
int longestStrChain(vector<string> &arr){
    sort(arr.begin(),arr.end(),comp);
    int n=arr.size();
    vector<int>dp(n,1);
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int prev=0;prev<i;prev++){
            if(check(arr[i],arr[prev])){
                dp[i]=max(dp[i],1+dp[prev]);
            }
        }
        maxi=max(dp[i],maxi);
    }
    return maxi;

}