class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>arr(n*n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // int pos = (n*i)+j;
                int index=grid[i][j]-1;
                arr[index]++;
            }
        }
        vector<int>ans;
        int missing,repeated;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==2){
                repeated=i+1;

            }
            if(arr[i]==0){
                missing=i+1;
            }
        }
        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;

    }
};