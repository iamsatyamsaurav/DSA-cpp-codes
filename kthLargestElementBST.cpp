#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root,vector<int>&ans, int k){
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left,ans,k);
    ans.push_back(root->data);
    inorder(root->right,ans,k);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    vector<int>ans;
    inorder(root,ans,k);
    int n=ans.size();
    if(ans.size()<k){
        return -1;
    }
    return ans[n-k];
}
