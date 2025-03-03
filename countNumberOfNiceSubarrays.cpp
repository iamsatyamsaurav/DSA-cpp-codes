class Solution {
public:
    //This problem can be reduced to no. of binary subarrays with sum k
    int f(vector<int>& nums, int k){
        
        int n=nums.size();
        int l=0,r=0,sum=0,count=0;
        while(r<n){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=(nums[l]%2);
                l++;
            }
            if(sum<=k){
                count+=r-l+1;
            }
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};