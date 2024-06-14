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
    vector<int>ans;
    //inorder traversal of BST gives elements in sorted order 
    void inorder(TreeNode* root,int k){
        if(root==NULL){
            return;
        }
        inorder(root->left,k);
        ans.push_back(root->val);
        if(ans.size()==k){
            return;
        }
        inorder(root->right,k);
        
        
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans[k-1];
    }
};