class Solution {
public:
    int characterReplacement(string s, int k) {

        //Optimal Solution
        int n=s.length();
        int l=0,r=0,maxLen=0,maxFreq=0;
        vector<int>hash(26,0);
        while(r<n){
            hash[s[r]-'A']++;
            maxFreq=max(maxFreq,hash[s[r]-'A']);
            int len=r-l+1;
            int changes=len-maxFreq;

            //window shrink
            if(changes>k){
                hash[s[l]-'A']--;
                l++;
            }

            //window expand
            if(changes<=k){
                maxLen=max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;

        //Brute force
        // int n=s.length();
        // int maxLen=0;
        
        // for(int i=0;i<n;i++){
        //     vector<int>hash(26,0);
        //     int maxFreq=0;
        //     for(int j=i;j<n;j++){
        //         hash[s[j]-'A']++;
        //         maxFreq=max(maxFreq,hash[s[j]-'A']);
        //         int len=j-i+1;
        //         int changes=len-maxFreq;
        //         if(changes>k){
        //             break;
        //         }
        //         if(changes<=k){
        //             maxLen=max(maxLen,j-i+1);
        //         }
        //     }
        // }
        // return maxLen;
        
    }
};