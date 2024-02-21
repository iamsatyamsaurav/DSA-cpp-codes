/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
// void getInOrder(TreeNode *root,vector<int>&ans){
//     if(root==NULL)return;
//     getInOrder(root->left,ans);
//     ans.push_back(root->data);
//     getInOrder(root->right,ans);
    
// }

TreeNode* findPre( TreeNode* root, TreeNode* current){
     TreeNode* pre=current->left;
     while(pre->right!=NULL && pre->right!=current){
         pre=pre->right;
     }
     return pre;
}  
vector<int> getInOrderTraversal(TreeNode *root)
{
    //morris traversal;
    vector<int>ans;
    TreeNode* current=root;
    while(current!=NULL){
        if(current->left==NULL){
            ans.push_back(current->data);
            current=current->right;
        }
        else{
            TreeNode* pre=findPre(root,current);
            if(pre->right==NULL){
                pre->right=current;
                current=current->left;
            }
            else{
                pre->right=NULL;
                ans.push_back(current->data);
                current=current->right;
            }
        }
    }
    return ans;
    
    // vector<int>ans;
    // getInOrder(root,ans);
    // return ans;
}