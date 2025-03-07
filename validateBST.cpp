/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // bool isSorted(vector<int>& inorder){
    //     int n=inorder.size();
    //     for(int i=0;i<n-1;i++){
    //         if(inorder[i]>=inorder[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // void findInorder(TreeNode* root,vector<int>& inorder){
    //     //base  case
    //     if(root==NULL){
    //         return;
    //     }
    //     findInorder(root->left,inorder);
    //     inorder.push_back(root->val);
    //     findInorder(root->right,inorder);
    // }
    bool isBST(TreeNode* root,long min, long max){
        //base case
        if(root==NULL){
            return true;
        }
        if(root->val>min && root->val<max){
            bool left=isBST(root->left,min,root->val);
            bool right=isBST(root->right,root->val,max);
            return left&&right;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        
        //Approach 1 -> inorder traversal of bst is sorted
        // vector<int>inorder;
        // findInorder(root,inorder);
        // if(isSorted(inorder)){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        //Approach 2 -> based on bst definiton 
        // (using range for each node)
        return isBST(root,LLONG_MIN,LLONG_MAX);

    }
};