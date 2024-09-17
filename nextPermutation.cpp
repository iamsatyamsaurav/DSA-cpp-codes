class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        // next_permutation(nums.begin(),nums.end());  //time complexity is O(N)

        //first we have to find the breakpoint
        int n=arr.size();
        int index=-1; //for storing the breakpoint
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index=i;
                break;
            }
        }

        //check the case when the given permutation is the last one, in this case reverse it to 
        //get the first permutaion
        if(index==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
        //swapping the breakpoint element with the smallest larger element
        for(int i=n-1;i>index;i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }

        //reverse the remaining numbers to get the just next permutation
        reverse(arr.begin()+index+1,arr.end());



    }
};