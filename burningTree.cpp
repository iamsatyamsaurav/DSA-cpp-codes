class Solution {
  public:
    Node* createMapping(Node* root, int target, map<Node*,Node*>&nodeToParent){
        //using level order traversal 
        queue<Node*>q;
        q.push(root);
        nodeToParent[root]=NULL;
        Node* targetNode=NULL;
        while(!q.empty()){
            Node* frontNode=q.front();
            q.pop();
            if(frontNode->data==target){
                targetNode=frontNode;
            }
            
            if(frontNode->left){
                nodeToParent[frontNode->left]=frontNode;
                q.push(frontNode->left);
            }
            if(frontNode->right){
                nodeToParent[frontNode->right]=frontNode;
                q.push(frontNode->right);
            }
        }
        return targetNode;
    }
    int burnTree(Node* root,map<Node*,Node*>&nodeToParent){
        map<Node*,bool>visited;
        queue<Node*>q;
        q.push(root);
        visited[root]=true;
        int ans=0;  //time
        while(!q.empty()){
            int size=q.size();
            bool flag=false; //to find out that if there was an insertion in the queue
            for(int i=0;i<size;i++){
                Node* front=q.front();
                q.pop();
                
                //for left child
                if(front->left && !visited[front->left]){
                    q.push(front->left);
                    visited[front->left]=true;
                    flag = true;
                }
                
                //for right child
                if(front->right && !visited[front->right]){
                    q.push(front->right);
                    visited[front->right]=true;
                    flag= true;
                }
                
                //for parent
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]]=true;
                    flag=true;
                }
            }
            
            if(flag){
                ans++;
            }
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        //1.create nodeToParent mapping to keep a track of the parent for every node
        //2.find the target Node
        //3.find the burning time
        
        map<Node*,Node*>nodeToParent;
        Node* targetNode=createMapping(root,target,nodeToParent);
        int ans=burnTree(targetNode,nodeToParent);
        return ans;
    }
};