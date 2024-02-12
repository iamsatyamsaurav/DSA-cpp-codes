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

************************************************************/\
// int height(TreeNode<int>* root){
//     if(root==NULL){
//         return 0;
//     }
//     int left=height(root->left);
//     int right=height(root->right);
//     return max(left,right)+1;
// }

pair<bool,int> fastBal(TreeNode<int>* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    //checking if left is balanced;
    pair<bool,int>left=fastBal(root->left);
    //checking if right is balanced
    pair<bool,int>right=fastBal(root->right);
    bool leftbal=left.first;
    bool rightbal=right.first;
    bool diff=(abs(left.second-right.second)<=1);
    pair<bool,int>ans;
    ans.second=max(left.second,right.second)+1;
    if(leftbal && rightbal && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
bool isBalancedBT(TreeNode<int>* root){
    //optimal:
    pair<bool,int>ans=fastBal(root);
    return ans.first;













//    if(root==NULL){
//        return true;
//    }
//     bool isLeftBal=isBalancedBT(root->left);
//     bool isRightBal=isBalancedBT(root->right);
//     bool bal=(abs(height(root->left)-height(root->right))<=1);
//     if(isLeftBal && isRightBal && bal){
//         return true;
//     }
//     else{
//         return false;
//     }

}