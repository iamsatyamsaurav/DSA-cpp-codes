class Solution {
public:
    int f(vector<int>& nums,int k){
        int n=nums.size();
        int l=0,r=0,count=0;
        unordered_map<int,int>mp; //<number,freq> for finding the no. of different numbers
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            if(mp.size()<=k){
                count+=r-l+1;
            }
            r++;
        }
        return count;

    }

    //We have to count the number of subarrays with k different intergers
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        //Optimal solution ---> Sliding window and two pointers
        return f(nums,k)-f(nums,k-1);

        
        // //Brute force ---> generate all subarrays
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     set<int>s;
        //     for(int j=i;j<n;j++){
        //         s.insert(nums[j]);
        //         if(s.size()>k){
        //             break;
        //         }
        //         if(s.size()==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};