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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int h1=height(root->left);
        int h2=height(root->right);
        return max(h1,h2)+1;
    }
    pair<bool,int>isBalancedFast(TreeNode* root){
        if(root==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int>left=isBalancedFast(root->left);
        pair<bool,int>right=isBalancedFast(root->right);
        int diff=abs(left.second-right.second);
        int height=max(left.second,right.second)+1;
        if(left.first && right.first && (diff<=1)){
            return {true,height};
        }else{
            return {false,height};
        }
    }
    bool isBalanced(TreeNode* root) {

        return isBalancedFast(root).first;



        //base case
        // if(root==NULL){
        //     return true;
        // }
        // bool left=isBalanced(root->left);
        // bool right=isBalanced(root->right);
        // int diff=abs(height(root->left)-height(root->right));
        // if(left && right && (diff<=1)){
        //     return true;
        // }
        // else{
        //     return false;
        // }
    }
};