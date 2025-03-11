#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
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
void findInorder(TreeNode<int>* root,vector<int>& ans){
    if(root==NULL) return;
    findInorder(root->left,ans);
    ans.push_back(root->data);
    findInorder(root->right,ans);
}
// void findInorder(TreeNode<int>* root,vector<TreeNode<int>*>& ans){
//     if(root==NULL) return;
//     findInorder(root->left,ans);
//     ans.push_back(root);
//     findInorder(root->right,ans);
// }
TreeNode<int>* flatten(TreeNode<int>* root)
{

    vector<int>ans;
    findInorder(root,ans);
    TreeNode<int>* newRoot=new TreeNode<int>(ans[0]);
    int n=ans.size();
    TreeNode<int>* curr=newRoot;
    for(int i=1;i<n;i++){
        TreeNode<int>* temp=new TreeNode<int>(ans[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return newRoot;


    // vector<TreeNode<int>*>ans;
    // findInorder(root,ans);
    // int n=ans.size();
    // for(int i=0;i<n-1;i++){
    //     ans[i]->left=NULL;
    //     ans[i]->right=ans[i+1];
    // }
    // ans[n-1]->left=NULL;
    // ans[n-1]->right=NULL;
    // return ans[0];
}
