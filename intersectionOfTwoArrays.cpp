class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        vector<int> ans;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]==nums2[j]){
                
                    ans.push_back(nums1[i]);
                         i++;
                         j++;   
                
            
            }
            else{
                j++;
            }
        }

        // The std::unique algorithm rearranges the elements in the range so that each unique element appears only once, and it returns an iterator pointing to the end of the unique elements. However, it doesn't actually remove the extra elements; it just moves them to the end of the range.
        //the std::erase function to erase the elements from the iterator returned by std::unique to the end of the vector. This effectively removes the duplicate elements that were moved to the end of the vector.
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};