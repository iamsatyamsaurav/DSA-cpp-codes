class Solution {
public:
    int f1(int index,vector<int>&nums,vector<int>&dp){ //excluding last element
        if(index==0){
            return nums[0];
        }
        if(index<0){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int notPick=0+f1(index-1,nums,dp);
        int pick=nums[index]+f1(index-2,nums,dp);
        return dp[index]=max(pick,notPick);
    }
    int f2(int index,vector<int>&nums,vector<int>&dp){ //excluding first element
        if(index==1){
            return nums[1];
        }
        if(index<1){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int notPick=0+f2(index-1,nums,dp);
        int pick=nums[index]+f2(index-2,nums,dp);
        return dp[index]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int ans1=f1(n-2,nums,dp1);
        int ans2=f2(n-1,nums,dp2);
        return max(ans1,ans2);
    }
};