class Solution {
public:
    void sortColors(vector<int>& nums) {


         //Optimised approach------> DUTCH NATIONAL FLAG ALGORITHM

        // The idea behind the algorithm is to keep all the 0s before the low pointer, all the 2s after the high pointer, and all the 1s between the low and high pointers
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                
                high--;
            }
            else{
                mid++;
            }
        }


        //Brute force approach

    //    int countZero=0,countOne=0,countTwo=0;
    //    for(int i=0;i<nums.size();i++){
    //        if(nums[i]==0){
    //            countZero++;
    //        }
    //        if(nums[i]==1){
    //            countOne++;
    //        }
    //        if(nums[i]==2){
    //            countTwo++;
    //        }
    //    } 
    //    for(int i=0;i<countZero;i++){
    //        nums[i]=0;
    //    }
    //    for(int i=countZero;i<countOne+countZero;i++){
    //        nums[i]=1;
    //    }
    //    for(int i=countOne+countZero;i<countTwo+countOne+countZero;i++){
    //        nums[i]=2;
    //    }


   

    

    }
};