class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int i = m - 1; // Last element in nums1's initial part
    int j = n - 1; // Last element in nums2
    int k = m + n - 1; // Last element in nums1's full capacity

    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
            k--;
        }
 
        else{
            nums1[k]=nums2[j];
            j--;
            k--;
        }
            
    }
    

        // for(int i=m,j=0;j<n;j++){
        //     nums1[i]=nums2[j];
        //     i++;
        // }
        // sort(nums1.begin(),nums1.end());



        //Runtime error

        // int i=0,j=0,k=0;
        // int size=m+n;
        // vector<int> temp(size);
        // while(i<m && j<n){
        //     if(nums1[i]<nums2[j]){
        //         temp[k++]=nums1[i++];
        //     }
        //     else{
        //         temp[k++]=nums2[j++];
        //     }
        // }
        // while(i<m){
        //     temp[k++]=nums1[i++];
        // }
        // while(i<n){
        //     temp[k++]=nums2[j++];
        // }
        // k=0;
        // for(int i=0;i<(m+n);i++){
        //     nums1[i]=temp[k];
        //     k++;
        // }
        
    }
};