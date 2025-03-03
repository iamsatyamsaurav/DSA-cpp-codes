class Solution {
public:
    //Problem is same as no. of subarrays with sum k
    int f(vector<int>& nums,int k){
        if(k==-1){
            return 0;
        }
        int n=nums.size();
        int l=0,r=0,count=0,sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            if(sum<=k){
                count+=(r-l+1);
            }
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        //Optimal Solution ----> Sliding window and two pointers
        return f(nums,goal)-f(nums,goal-1);


        //Better Solution ----> Using hashmap (best when array contains positive and negative elements both)
        // int n=nums.size();
        // unordered_map<int,int>mp;
        // mp[0]=1;
        // int presum=0,count=0;
        // for(int i=0;i<n;i++){
        //     presum+=nums[i];
        //     int remainder=presum-goal;
        //     if(mp.find(remainder)!=mp.end()){
        //         count+=mp[remainder];
        //     }
        //     mp[presum]++;
        // }
        // return count;


        //Brute force ----> Generating all subarrays
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==goal){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};