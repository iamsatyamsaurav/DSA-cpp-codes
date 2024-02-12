class Solution
{
    public:
    pair<bool,int>fastIsSum(Node *root){
    //empty tree
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    //leaf nodes
    if(root->left==NULL && root->right==NULL){
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>left=fastIsSum(root->left);
    pair<bool,int>right=fastIsSum(root->right);
    bool isLeft=left.first;
    bool isRight=right.first;
    bool isVal=root->data==left.second+right.second;
    pair<bool,int>ans;
    if(isLeft && isRight && isVal){
        ans.first=true;
        ans.second=root->data+left.second+right.second;
    }
    else{
        ans.first=false;
    }
    return ans;
}
    bool isSumTree(Node* root)
    {
         return fastIsSum(root).first;
    }
};