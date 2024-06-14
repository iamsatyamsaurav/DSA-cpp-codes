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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    // vector<vector<int>>result;
    // if(root==NULL){
    //     return result;
    // }
    // queue<TreeNode*>q;
    // q.push(root);
    // bool leftToRight=true;
    // while(!q.empty()){
    //     int size=q.size();
    //     vector<int>ans(size);
    //     for(int i=0;i<size;i++){
    //         TreeNode* frontElement=q.front();
    //         q.pop();
    //         int index=leftToRight? i : size-i-1;
    //         ans[index]=frontElement->val;
    //         if(frontElement->left){
    //             q.push(frontElement->left);
    //         }
    //         if(frontElement->right){
    //             q.push(frontElement->right);
    //         }
    //     }
    //     leftToRight=!leftToRight;
    //     result.push_back(ans);
        

    // }
    // return result;

     vector<vector<int>>finalAns;
       if(root==NULL){
        return finalAns;
      
       }
      
       vector<int>ans;
       queue<TreeNode*>q;
       TreeNode* node=root;
       q.push(node);
       bool flag=true;
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
        if(flag){
            finalAns.push_back(ans);
        }
        else{
            reverse(ans.begin(),ans.end());
            finalAns.push_back(ans);
        }
        flag=!flag;
          
    }
        return finalAns;
    }
};