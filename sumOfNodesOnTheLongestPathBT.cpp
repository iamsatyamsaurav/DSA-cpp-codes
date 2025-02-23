// structure of the node of the binary tree is as
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int x)
//     {
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };

class Solution {
  public:
    void f(Node* root,pair<int,int>p,int &maxLen, int &sum){
        //base case
        //we reach leaf node
        if(root->left==NULL && root->right==NULL){
            if(p.second>maxLen){
                sum=p.first;
                maxLen=p.second;
                return ;
            }
            else if(p.second==maxLen){
                sum=max(sum,p.first);
                return ;
            }
            return ;
        }
        
        if(root->left){
            int s=p.first+root->left->data;
            int l=p.second+1;
            f(root->left,make_pair(s,l),maxLen,sum);
        }
        if(root->right){
            int s=p.first+root->right->data;
            int l=p.second+1;
            f(root->right,make_pair(s,l),maxLen,sum);
        }
    }
    int sumOfLongRootToLeafPath(Node *root) {
        if(root==NULL){
            return 0;
        }
        //<sum,length>
        pair<int,int> p=make_pair(root->data,1);
        int maxLen=0;
        int reqdSum=INT_MIN;
        f(root,p,maxLen,reqdSum);
        return reqdSum;
    }
};