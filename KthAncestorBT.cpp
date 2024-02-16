Node* solve(Node* root,int &k,int node){
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }
    Node* left=solve(root->left,k,node);
    Node* right=solve(root->right,k,node);
    
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left==NULL && right!=NULL){
        k--;
        if(k<=0){
            //to lock the answer
            k=INT_MAX;
            return root;
        }
        else{
            return right;
        }
    }
    if(left!=NULL && right==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        else{
            return left;
        }
    }
}
int kthAncestor(Node *root, int k, int node)
{   
   Node* ans=solve(root,k,node);
   if(ans==NULL || ans->data==node){  //hadling the case when the root node data is equal to the given node data
                                        //the returned ans is the root node but the ans to be returned is -1
       return -1;
   }
   else{
       return ans->data;
   }
    
}