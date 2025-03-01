class Solution {
public:
    //Problem boils down to longest subarray with at most k zeroes
    int longestOnes(vector<int>& nums, int k) {

        //OPTIMAL SOLUTION
        int n=nums.size();
        int l=0,r=0,maxLen=0,zeroes=0;
        while(r<n){
            if(nums[r]==0){
                zeroes++;
            }
            //window shrink
            if(zeroes>k){
                if(nums[l]==0){
                    zeroes--;
                }
                l++;
            }
            //window expand
            if(zeroes<=k){
                int len=r-l+1;
                maxLen=max(len,maxLen);
            }
            r++;
        }
        return maxLen;

        //BETTER SOLUTION
        // int n=nums.size();
        // int l=0,r=0,maxLen=0,zeroes=0;
        // while(r<n){
        //     if(nums[r]==0){
        //         zeroes++;
        //     }
        //     //window shrink
        //     while(zeroes>k){
        //         if(nums[l]==0){
        //             zeroes--;
        //         }
        //         l++;
        //     }
        //     //window expand
        //     if(zeroes<=k){
        //         int len=r-l+1;
        //         maxLen=max(len,maxLen);
        //     }
        //     r++;
        // }
        // return maxLen;


        //BRUTE FORCE
        // int n=nums.size();
        // int maxLen=0;
        // for(int i=0;i<n;i++){
        //     int zeroes=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0){
        //             zeroes++;
        //         }
        //         if(zeroes>k){
        //             break;
        //         }
        //         else{
        //             int len=j-i+1;
        //             maxLen=max(len,maxLen);
        //         }
        //     }
        // }
        // return maxLen;
    }
};