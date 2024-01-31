/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
	//base case
    if(root==NULL){
        return 0;
    }
    //recursive call
    int left=heightOfBinaryTree(root->left);
    int right=heightOfBinaryTree(root->right);
    int height=max(left,right)+1;
    return height;

}
