class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Binary Search
        int row=matrix.size();
        int col=matrix[0].size();
        int size=row*col;
        int s=0;
        int e=size-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(matrix[mid/col][mid%col]==target){
                return 1;
            }
            else if(matrix[mid/col][mid%col]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return 0;
        
    }
};