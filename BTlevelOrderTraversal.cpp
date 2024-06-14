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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>finalAns;
       if(root==NULL){
        return finalAns;
      
       }
      
       vector<int>ans;
       queue<TreeNode*>q;
       TreeNode* node=root;
       q.push(node);
       while(!q.empty()){
            vector<int>ans;
            int levelSize=q.size();
        for(int i=0;i<levelSize;i++){
            TreeNode* newNode=q.front();
            q.pop();
            ans.push_back(newNode->val);
            if(newNode->left){
                q.push(newNode->left);
            }
            if(newNode->right){
                q.push(newNode->right);
            }
        }
        finalAns.push_back(ans);  
    }
        return finalAns;
    }
};