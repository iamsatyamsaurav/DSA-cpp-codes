
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //Morris inorder traversal //LNR
        //TC -> O(N) and SC -> O(1)
        vector<int>ans;
        Node* curr=root;
        
        while(curr!=NULL){
            
            if(curr->left==NULL){
            //left subree do not exist
            ans.push_back(curr->data);
            curr=curr->right;
            }
            else{
                //left subtree exists
                Node* prev=curr->left;
                while(prev->right!=NULL && prev->right!=curr){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=curr;
                    curr=curr->left;
                }
                else if(prev->right==curr){
                    //means left subtree is traversed
                    prev->right=NULL; //remove the link
                    ans.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};