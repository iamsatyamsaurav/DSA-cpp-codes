class Solution {
public:

    // long long findNcr(int n,int r){
    //     long long res=1;
    //     for(int i=0;i<r;i++){
    //         res=res*(n-i);
    //         res=res/(i+1);
    //     }
    //     return res;
    // }
    vector<int> getRow(int rowIndex) {
        
        // vector<int>ans;
        // int col=rowIndex+1;
        // for(int i=0;i<col;i++){
        //     int element=findNcr(rowIndex,i);
        //     ans.push_back(element);
        // }
        // return ans;

        vector<int>ans;
        ans.push_back(1);
        long long res=1;
        int col=rowIndex+1;
        for(int i=1;i<col;i++){
            res=res*(col-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;


        
    }
};