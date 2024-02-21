class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* current=root;
        while(current!=NULL){
            if(current->left!=NULL){
                Node* pre=current->left;
                while(pre->right!=NULL){
                    pre=pre->right;
                }
                
                pre->right=current->right;
                current->right=current->left;
                current->left=NULL;
            }
            current=current->right;
        }
    }
};