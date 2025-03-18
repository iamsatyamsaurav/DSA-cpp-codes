/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
class info{
    public:
    int maxi;
    int mini;
    int size;
    bool isBST;
};
info f(TreeNode* root, int &ans){
    //base case
    if(root==NULL){
        return {INT_MIN,INT_MAX,0,true};
    }

    info left=f(root->left,ans);
    info right=f(root->right,ans);

    info currentNode;
    currentNode.maxi=max(root->data,right.maxi);
    currentNode.mini=min(root->data,left.mini);
    currentNode.size=left.size+right.size+1;
    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currentNode.isBST=true;
        ans=max(ans,currentNode.size);
    }
    else{
        currentNode.isBST=false;
    }
    return currentNode;
}
int largestBST(TreeNode * root){
    int maxSize=0;
    info ans=f(root,maxSize);
    return maxSize;
}