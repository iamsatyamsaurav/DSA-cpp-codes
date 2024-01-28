vector<int> generateRow(int row){
    vector<int>ans;
    ans.push_back(1);
    long long res=1;
    for(int i=1;i<row;i++){
        res=res*(row-i);
        res=res/i;
        ans.push_back(res);
    }
    return ans;
}
vector<vector<int>> pascalTriangle(int N) {

    vector<vector<int>>ans;
    for(int i=1;i<=N;i++){
        ans.push_back(generateRow(i));
    }
    return ans;

    // vector<vector<int>>ans;
    // if(N==1){
    //     ans.push_back({1});
    //     return ans;
    // }
    // else if(N==2){
    //     ans.push_back({1});
    //     ans.push_back({1,1});
    //     return ans;
    // }
    // else{
    //     ans.push_back({1});
    //     ans.push_back({1,1});
    //     for(int i=2;i<N;i++){
    //         vector<int>ans2;
    //         ans2.push_back(1);
    //         for(int j=0;j<(ans[i-1].size())-1;j++){
    //             int element=ans[i-1][j]+ans[i-1][j+1];
    //             ans2.push_back(element);
    //         }
    //         ans2.push_back(1);
    //         ans.push_back(ans2);
    //     }
    // }
    // return ans;
}