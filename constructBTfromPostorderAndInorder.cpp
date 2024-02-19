  int findPos(int in[],int element, int n,int end){
        for(int i=end;i>=0;i--){
            if(in[i]==element){
                return i;
            }
           
        }
        return -1;
       
    }
    Node* solve(int in[], int post[], int n,int &postorderIndex,int inorderStart,int inorderEnd){
        //base case
        if(postorderIndex<0 || inorderStart>inorderEnd){
            return NULL;
        }
        int element=post[postorderIndex];
        postorderIndex--;
        
        Node* root=new Node(element);
        int end=inorderEnd;//for handling the case if repeating element
        int position=findPos(in,element,n,end);
        end=position-1;
        if(position==-1){
            return NULL;
        }
        
        
        root->right=solve(in,post,n,postorderIndex,position+1,inorderEnd);
        root->left=solve(in,post,n,postorderIndex,inorderStart,position-1);
        
        return root;
        
        
    }    
    
Node *buildTree(int in[], int post[], int n) {
        int postorderIndex=n-1;
        Node* root=solve(in,post,n,postorderIndex,0,n-1);
        return root;
}