
/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
// int height(BinaryTreeNode<int>* root){
// 	if(root==NULL){
// 		return 0;
// 	}
// 	int left=height(root->left);
// 	int right=height(root->right);
// 	int ans=max(left,right)+1;
// 	return ans;
// }
pair<int,int> diameterFast(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int>p=make_pair(0,0);
		return p;
	}
	// (d,h)
	pair<int,int>left=diameterFast(root->left);
	pair<int,int>right=diameterFast(root->right);

	int op1=left.first;
	int op2=right.first;
	int op3=left.second+right.second+1;

	pair<int,int>ans;
	ans.first=max(op1,max(op2,op3));
	ans.second=max(left.second,right.second)+1;
	return ans;



}
int diameterOfBinaryTree(BinaryTreeNode<int>* root) {
	return diameterFast(root).first;

	// if(root==NULL){
	// 	return 0;
	// }
	// //diameter found in left subtree only
	// int op1=diameterOfBinaryTree(root->left);
	// //right subtree only
	// int op2=diameterOfBinaryTree(root->right);
	// //both the left and right part
	// int op3=height(root->left)+height(root->right)+1;
	// int ans=max(op1,max(op2,op3));
	// return ans;
	
}