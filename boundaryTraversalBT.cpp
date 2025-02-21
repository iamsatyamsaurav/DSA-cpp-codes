/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void traverseLeft(TreeNode<int> *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left,ans);
    }
    else{
        traverseLeft(root->right,ans);
    }
}
void traverseLeaf(TreeNode<int> *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    traverseLeaf(root->left,ans);
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
    }
    traverseLeaf(root->right,ans);
}
void traverseRight(TreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->right){
        traverseRight(root->right,ans);
    }
    else{
        traverseRight(root->left,ans);
    }
    ans.push_back(root->data);
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	vector<int>ans;
    if(root==NULL){
        return ans;
    }
    //print root
    ans.push_back(root->data);

    //print left boundary
    traverseLeft(root->left,ans);

    //print leaf boundary
    //left subtree
    traverseLeaf(root->left,ans);
    //right subtree
    traverseLeaf(root->right,ans);

    //print right boundary
    traverseRight(root->right,ans);
    return ans;

}
