/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode* temp=root;
    TreeNode* pred=NULL;
    TreeNode* succ=NULL;
    //find the target node while keeping a track of potential pred and succ
    while(temp!=NULL){
        if(key>temp->data){
            pred=temp;
            temp=temp->right;
        }
        else if(key<temp->data){
            succ=temp;
            temp=temp->left;
        }
        else{
            break;
        }
    }
    if(temp==NULL){  //target not present
        int p,s;
        if(pred!=NULL){
            p=pred->data;
        }
        else{
            p=-1;
        }
        if(succ!=NULL){
            s=succ->data;
        }
        else{
            s=-1;
        }
        return {p,s};
    }

    //if target present
    //find inorder predecessor --> largest node in left subtree
    if(temp->left!=NULL){
        TreeNode* leftSubtree=temp->left;
        while(leftSubtree->right!=NULL){
            leftSubtree=leftSubtree->right;
        }
        pred=leftSubtree;
    }

    //find inorder successor --> smallest node in right subtree
    if(temp->right!=NULL){
        TreeNode* rightSubrtree=temp->right;
        while(rightSubrtree->left!=NULL){
            rightSubrtree=rightSubrtree->left;
        }
        succ=rightSubrtree;
    }
    
    int p,s;
    if(pred!=NULL){
        p=pred->data;
    }
    else{
        p=-1;
    }
    if(succ!=NULL){
        s=succ->data;
    }
    else{
        s=-1;
    }
    return {p,s};

    
    
    

}