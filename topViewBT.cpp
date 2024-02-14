public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int,int>mp;  //hd, node
        queue<pair<Node* , int>>q; //node, hd
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontNode=temp.first;
            int hd=temp.second;
            
            if(mp.find(hd)==mp.end()){   //it means there is no any node corresponding to the
                mp[hd]=frontNode->data;  //particular hd---->create mapping 
            }
            if(frontNode->left){
                q.push(make_pair(frontNode->left,hd-1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,hd+1));
            }
        }
        for(auto i:mp){
            
                ans.push_back(i.second);
        }
        
        return ans;
    }