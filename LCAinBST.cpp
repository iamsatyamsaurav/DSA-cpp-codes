/************************************************************
    Following is the Binary Search Tree node structure

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

************************************************************/

TreeNode *LCAinaBST(TreeNode *root, TreeNode *p, TreeNode *q)
{

    //in O(1) space;
    TreeNode* temp=root;
    while(temp!=NULL){
        if(temp->data<p->data && temp->data<q->data){
            temp=temp->right;
        }
        else if(temp->data>p->data && temp->data>q->data){
            temp=temp->left;
        }
        else{
            return temp;
        }
    }
    return temp;


    //using recursion
    //base case
    // if(root==NULL){
    //     return NULL;
    // }
    // if(root->data<p->data && root->data<q->data){
    //     return LCAinaBST(root->right,p,q);
    // }
    // else if(root->data>p->data && root->data>q->data){
    //     return LCAinaBST(root->left,p,q);
    // }
    // else{
    //     return root;
    // }
}