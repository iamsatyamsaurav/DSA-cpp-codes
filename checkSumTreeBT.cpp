#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
template <typename T>
pair<bool,int> isSumTreeFast(TreeNode<T> *root){
    //base case
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p=make_pair(true,root->val);
        return p;
    }
    
    pair<bool,int>left=isSumTreeFast(root->left);
    pair<bool,int>right=isSumTreeFast(root->right);
    if(left.first && right.first && (root->val==left.second+right.second)){
        return {true,root->val+left.second+right.second};
    }
    else{
        return {false,root->val+left.second+right.second};
    }
}
template <typename T>
bool isSumTree(TreeNode<T> *root)
{
    return isSumTreeFast(root).first;
}