//using linear search

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int maximum=INT_MIN,index=-1;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]>maximum){
//                 maximum=arr[i];
//                 index=i;
//             }
//         }
//         return index;
//     }
// };

//using Binary search


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return e;
    }
};