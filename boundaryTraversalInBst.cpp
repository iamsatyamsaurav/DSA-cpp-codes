class Solution {
public:
    void traverseLeft(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,ans);
        }
        else{
            traverseLeft(root->right,ans);
        }
    }
    void traverseLeafs(Node* root, vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        traverseLeafs(root->left,ans);
        traverseLeafs(root->right,ans);
    }
    void traverseRight(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        if(root->right){
            traverseRight(root->right,ans);
        }
        else{
            traverseRight(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        //print root
        ans.push_back(root->data);
        //print left except leaf
        traverseLeft(root->left, ans);
        //print leaf nodes:
        //in left subree
        traverseLeafs(root->left,ans);
        //in right subtree
        traverseLeafs(root->right,ans);
        //print right except leaf
        traverseRight(root->right,ans);
    }
};