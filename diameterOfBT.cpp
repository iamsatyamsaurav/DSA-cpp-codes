/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int height(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
}
pair<int,int> diameterFast(TreeNode<int> *root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
    //<d,h>
    pair<int,int>left=diameterFast(root->left);
    pair<int,int>right=diameterFast(root->right);
    int d1=left.first;
    int d2=right.first;
    int d3=left.second+right.second;
    int d=max(d1,max(d2,d3));
    int h=max(left.second,right.second)+1;
    return {d,h};
    
     

}
int diameterOfBinaryTree(TreeNode<int> *root){

    return diameterFast(root).first;


	// if(root==NULL){
    //     return 0;
    // }
    // int op1=diameterOfBinaryTree(root->left);
    // int op2=diameterOfBinaryTree(root->right);
    // //since path is defined in terms of no. of edges
    // int op3=height(root->left)+height(root->right);
    // return max(op1,max(op2,op3));
}
