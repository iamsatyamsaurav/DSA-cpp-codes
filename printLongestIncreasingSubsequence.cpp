class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        vector<int> dp(n,1);
        vector<int> hash(n);
        for(int i=0;i<n;i++){
            hash[i]=i;
        }
    	for(int i=1;i<n;i++){
    		for(int j=0;j<i;j++){
    			if(arr[j]<arr[i] && 1+dp[j]>dp[i]){
    				// dp[i]=max(dp[i],1+dp[j]);
    				dp[i]=1+dp[j];
    				hash[i]=j;
    			}
    		}
    	}
    	int lastIndex=0;
    	int maxi=1;
    	for(int i=0;i<n;i++){
    	    if(dp[i]>maxi){
    	        maxi=dp[i];
    	        lastIndex=i;
    	    }
    	}
    	vector<int>ans;
    	
    	while(hash[lastIndex]!=lastIndex){
    	    ans.push_back(arr[lastIndex]);
    	    lastIndex=hash[lastIndex];
    	}
    	ans.push_back(arr[lastIndex]);
    	reverse(ans.begin(),ans.end());
    	return ans;
    }
};