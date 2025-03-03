class Solution {
public:
    string minWindow(string s, string t) {
        
        //Optimal solution --> Sliding window and two pointers
        int n=s.length();
        int m=t.length();
        int minLen=1e9,count=0,startIndex=-1;
        vector<int>hash(256,0);
        int l=0,r=0;

        //pre inserting into hash
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r<n){
            if(hash[s[r]]>0){
                count++; //we found one required occurence
            }
            hash[s[r]]--;

            //shrinking the window
            while(count==m){
                int len=r-l+1;
                if(len<minLen){
                    minLen=len;
                    startIndex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    count--;
                }
                l++;
            }
            //expanding the window
            r++;
        }

        if(startIndex==-1){
            return "";
        }
        return s.substr(startIndex,minLen);


        //Brute force --> generate all substrings
        // int n = s.length();
        // int m = t.length();
        // int minLen=1e9,startIndex=-1;
        
        // for(int i=0;i<n;i++){
        //     vector<int>hash(256,0);
        //     int count=0;
        //     for(int k=0;k<m;k++){
        //         hash[t[k]]++;
        //     }
        //     for(int j=i;j<n;j++){
        //         if(hash[s[j]]>0){
        //             count++;
        //         }
        //         hash[s[j]]--;
        //         if(count==m){
        //             int len=j-i+1;
        //             if(len<minLen){
        //                 minLen=len;
        //                 startIndex=i;
        //             }
        //             break;
        //         }
        //     }

        // }
        // if(startIndex==-1){
        //     return "";
        // }
        // return s.substr(startIndex,minLen);

    }
};