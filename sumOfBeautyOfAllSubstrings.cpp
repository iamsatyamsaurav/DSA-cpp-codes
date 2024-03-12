    int findMax(vector<int>arr){
        int maxi=INT_MIN;
        for(int i=0;i<26;i++){

            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
     int findMin(vector<int>arr){
        int mini=INT_MAX;
        for(int i=0;i<26;i++){
            if(arr[i]>=1){
                 mini=min(mini,arr[i]);
            }
           
        }
        return mini;
    }
    int findBeauty(vector<int>arr){
         int maxi=findMax(arr);
        int mini=findMin(arr);
      
        return maxi-mini;
    }int sumOfBeauty(string s) {
	int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            vector<int>arr(26,0);
            for(int j=i;j<n;j++){
                int index=s[j]-'a';
                arr[index]++;
                ans=ans+findBeauty(arr);
            }
        }
        return ans;
}
