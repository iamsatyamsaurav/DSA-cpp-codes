class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //optimal 
        //linked list cycle approach-->slow and fast pointers
        int slow=nums[0];
        int fast=nums[0];

        //since there is duplicate, cycle is certain
        do{
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;




        // //hashing
        // int n=nums.size();
        // vector<int>arr(n,0);
        // for(int i=0;i<n;i++){
        //     int index=nums[i]-1;
        //     arr[index]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(arr[i]>=2){
        //         return i+1;
        //     }
        // }
        // return 0;
        
    }
};