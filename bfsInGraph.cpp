vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int>visited(n,0);
    visited[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto i : adj[node]){
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
    return bfs;
}