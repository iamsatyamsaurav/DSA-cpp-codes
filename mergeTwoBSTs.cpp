/*************************************************************

    Following is the Binary Tree node structure:

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
void findInorder(TreeNode* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    findInorder(root->left,ans);
    ans.push_back(root->data);
    findInorder(root->right,ans);
}
vector<int> mergeTwoSortedArrays(vector<int>& arr1, vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>temp(n+m);
    int k=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            temp[k]=arr1[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        temp[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        temp[k]=arr2[j];
        j++;
        k++;
    }

    return temp;
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int>inorder1,inorder2;
    findInorder(root1,inorder1);
    findInorder(root2,inorder2);
    vector<int>ans=mergeTwoSortedArrays(inorder1,inorder2);
    //if the question demanded, we would have converted this sorted merged inorder to a balanced BST
    return ans;
}