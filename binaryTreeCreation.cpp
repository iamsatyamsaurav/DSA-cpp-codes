#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter the data for the left of the node "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for the right of the node "<<data<<endl;
    root->right=buildTree(root->right);
    return root; 
}
void levelOrderTraversal(Node* root){
    queue<Node *>q;
    q.push(root);
    q.push(NULL);    //as one level i.e level 0 is completed
    while(!q.empty()){
        Node* temp=q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){    //if we do not check this condition then the loop would never end
                               //as q would never be empty
                q.push(NULL);    
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
int main(){
    Node* root=NULL;
    root=buildTree(root);
    cout<<"Level order traversal"<<endl;
    levelOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}