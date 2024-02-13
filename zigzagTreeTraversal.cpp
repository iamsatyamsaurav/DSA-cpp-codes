class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>result;
    if(root==NULL){
        return result;
    }
    queue<Node*>q;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        //processing every level
        int size=q.size();
        vector<int>ans(size);
        for(int i=0;i<size;i++){
            Node* frontElement=q.front();
            q.pop();
            int index=leftToRight? i : size-i-1;
            ans[index]=frontElement->data;
            if(frontElement->left){
                q.push(frontElement->left);
            }
            if(frontElement->right){
                q.push(frontElement->right);
            }
        }
        leftToRight=!leftToRight;
        for(auto i : ans){
            result.push_back(i);
        }
        

    }
    return result;
    }
};