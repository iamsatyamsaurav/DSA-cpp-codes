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
    int findmin(TreeNode* root){
        TreeNode* temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        //base case
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            //perform deletion
            //case 1 -> 0 child
            if(root->left==NULL && root->right==NULL){
                delete(root);
                return NULL;
            }

            //case 2 -> 1 child
            //left child
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete(root);
                return temp;
            }
            //right child
            if(root->left==NULL && root->right!=NULL){
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }

            //case 3 -> 2 child
            if(root->left!=NULL && root->right!=NULL){
                int mini=findmin(root->right); //inorder successor
                root->val=mini;
                root->right= deleteNode(root->right,mini);
                return root;
            }
        }
        else if(key>root->val){
            root->right =deleteNode(root->right,key);
            return root;
        }
        else{
            root->left= deleteNode(root->left,key);
            return root;
        }
        return root;
    }
};