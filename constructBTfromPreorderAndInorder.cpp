class Solution{
    public:
    int findPos(int in[],int element, int n,int start){
        for(int i=start;i<n;i++){
            if(in[i]==element){
                return i;
            }
           
        }
        return -1;
       
    }
    Node* solve(int in[], int pre[], int n,int &preorderIndex,int inorderStart,int inorderEnd){
        //base case
        if(preorderIndex>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element=pre[preorderIndex];
        preorderIndex++;
        
        Node* root=new Node(element);
        int start=inorderStart;//for handling the case if repeating element
        int position=findPos(in,element,n,start);
        start=position+1;
        if(position==-1){
            return NULL;
        }
        
        root->left=solve(in,pre,n,preorderIndex,inorderStart,position-1);
        root->right=solve(in,pre,n,preorderIndex,position+1,inorderEnd);
        
        return root;
        
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderIndex=0;
        // int inorderStart=0;
        // int inorderEnd=n-1;
        Node* root=solve(in,pre,n,preorderIndex,0,n-1);
        return root;
    }
};