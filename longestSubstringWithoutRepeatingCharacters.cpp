class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //sliding window
        vector<int>hash(256,-1);
        int n=s.size();
        int l=0,r=0,maxLen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxLen=max(len,maxLen);
            hash[s[r]]=r;
            r++;
        }
        return maxLen;


        //brute force
        // int n=s.size();
        // int maxLen=0;
        // for(int i=0;i<n;i++){
        //     vector<int>hash(256,0);
        //     for(int j=i;j<n;j++){
        //         if(hash[s[j]]!=0){
        //             break;
        //         }
        //         int len=j-i+1;
        //         maxLen=max(len,maxLen);
        //         hash[s[j]]=1;
        //     }
        // }
        // return maxLen;
    }
};