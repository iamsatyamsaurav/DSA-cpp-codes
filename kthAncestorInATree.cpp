/User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
Node* f(Node* root,int &k, int node){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }
    Node* leftAns=f(root->left,k,node);
    Node* rightAns=f(root->right,k,node);
    if(leftAns!=NULL && rightAns==NULL){
        k--;
        if(k==0){
            return root;
        }else{
            return leftAns;
        }
    }
    if(leftAns==NULL && rightAns!=NULL){
        k--;
        if(k==0){
            return root;
        }else{
            return rightAns;
        }
    }
    else{
        return NULL;
    }

}
// void f(Node* root, int k, int node, vector<int>ans, int &finalAns){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     ans.push_back(root->data);
//     f(root->left,k,node,ans,finalAns);
//     f(root->right,k,node,ans,finalAns);
//     if(ans.back()==node){
//         int n=ans.size();
//         int index=n-1-k;
//         if(index<0){
//             finalAns=-1;
//         }
//         else finalAns=ans[index];
//     }
    
    
// }
int kthAncestor(Node *root, int k, int node)
{
    // vector<int>ans;
    // int finalAns=-1;
    // f(root, k, node, ans, finalAns);
   
    // return finalAns;
    
    Node* ans=f(root,k,node);
    if(ans==NULL || ans->data==node){
        return -1;
    }
    else{
        return ans->data;
    }
}