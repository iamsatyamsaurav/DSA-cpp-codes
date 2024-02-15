public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
    
       Node* leftPart=lca(root->left,n1,n2);
       Node* rightPart=lca(root->right,n1,n2);
       
       //four cases
       if(leftPart==NULL && rightPart==NULL){
           return NULL;
       }
       if(leftPart==NULL && rightPart!=NULL){
           return rightPart;
       }
       if(leftPart!=NULL && rightPart==NULL){
           return leftPart;
       }
       if(leftPart!=NULL && rightPart!=NULL){
           return root;
       }
       
    }