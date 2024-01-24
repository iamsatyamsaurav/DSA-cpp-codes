//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(int n,int x,int y,vector<vector<int>> visited,vector<vector<int>> &m){
        if((x>=0&&x<n)&&(y>=0&&y<n)&&m[x][y]==1&&visited[x][y]==0){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m,int n,vector<vector<int>> visited,vector<string> &ans,int x,int y,string path){
        //base case----destination reached
        if(x==n-1&&y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y]=1;
        
        //down
        int srcx=x+1;
        int srcy=y;
        if(isSafe(n,srcx,srcy,visited,m)){
            path.push_back('D');
            solve(m,n,visited,ans,srcx,srcy,path);
            path.pop_back();
        }
        
        //left
        srcx=x;
        srcy=y-1;
        if(isSafe(n,srcx,srcy,visited,m)){
            path.push_back('L');
            solve(m,n,visited,ans,srcx,srcy,path);
            path.pop_back();
        }
        
        //right
        srcx=x;
        srcy=y+1;
        if(isSafe(n,srcx,srcy,visited,m)){
            path.push_back('R');
            solve(m,n,visited,ans,srcx,srcy,path);
            path.pop_back();
        }
        
        //up
        srcx=x-1;
        srcy=y;
        if(isSafe(n,srcx,srcy,visited,m)){
            path.push_back('U');
            solve(m,n,visited,ans,srcx,srcy,path);
            path.pop_back();
        }
        
        
        visited[x][y]=0;  //while returning mark the visited places 0(unvisited)
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0){
            return ans;    //mouse is not at the starting point
        }
        vector<vector<int>> visited=m;    //creating visited matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path="";
        int srcx=0,srcy=0;
        solve(m,n,visited,ans,srcx,srcy,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<vector<int>> m(n, vector<int> (n,0));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cin >> m[i][j];
//             }
//         }
//         Solution obj;
//         vector<string> result = obj.findPath(m, n);
//         sort(result.begin(), result.end());
//         if (result.size() == 0)
//             cout << -1;
//         else
//             for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }
// } Driver Code Ends