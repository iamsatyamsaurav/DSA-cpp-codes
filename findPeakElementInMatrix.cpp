vector<int> findPeakGrid(vector<vector<int>> &mat){
    vector<int>ans;
       int n=mat.size();
       int m=mat[0].size();
       int left,right,top,bottom;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(i-1>=0){
                   top=mat[i-1][j];
               }
               else top=-1;
               if(i+1<n) bottom=mat[i+1][j];
               else bottom=-1;
               if(j-1>=0) left=mat[i][j-1];
               else left=-1;
               if(j+1<m) right=mat[i][j+1];
               else right=-1;

               int element=mat[i][j];
               if(element>left && element>right && element>top && element>bottom){
                   ans.push_back(i);
                   ans.push_back(j);
                   break;
               } 
            if(ans.size()>0){
                break;
            }
           }
       }
       return ans;
}