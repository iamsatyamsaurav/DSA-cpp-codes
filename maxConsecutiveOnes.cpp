class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxCount=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxCount=max(count,maxCount);
            }
            else{
                count=0;
            }
        }
        return maxCount;
    }
};