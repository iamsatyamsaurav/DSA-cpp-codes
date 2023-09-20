class Solution
{
    public:
    void insertAtTail(Node* &head,Node* &tail, int data){
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }
        else{
            Node* newNode=new Node(data);
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node *copyList(Node *head)
    {
        //APPROACH 2: WITHOUT USING MAP
        
        //creating a clone of the original list without random pointers
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp=temp->next;
        }
        
        //inserting clone list in between the nodes of the original list
        Node* originalNode=head;
        Node* cloneNode=cloneHead;
        Node* nextNode=NULL;
        while(originalNode!=NULL && cloneNode!=NULL){
            nextNode=originalNode->next;
            originalNode->next=cloneNode;
            originalNode=nextNode;
            
            nextNode=cloneNode->next;
            cloneNode->next=originalNode;
            cloneNode=nextNode;
        }
        
        //cloning random pointers
        originalNode=head;
        while(originalNode!=NULL){
            if(originalNode->next!=NULL){
                if(originalNode->arb!=NULL){
                    originalNode->next->arb=originalNode->arb->next;
                }
                else{
                    originalNode->next->arb= NULL;  //originalNode->arb;
                }
            }
            
            originalNode=originalNode->next->next;
        }
        
        //reverting the changes in step 2 and separating the original and the clone list
        cloneNode=cloneHead;
        originalNode=head;
        while(cloneNode!=NULL && originalNode!=NULL){
            originalNode->next=cloneNode->next;
            originalNode=originalNode->next;
            if(originalNode!=NULL){
                cloneNode->next=originalNode->next;
            }
            
            cloneNode=cloneNode->next;
            
        }
        
        return cloneHead;
        
        
        //APPROACH 1: USING MAP
        
        // Node* cloneHead=NULL;
        // Node* cloneTail=NULL;
        // Node* temp=head;
        // //creating a clone of the original list without random pointers
        // while(temp!=NULL){
        //     insertAtTail(cloneHead,cloneTail,temp->data);
        //     temp=temp->next;
        // }
        
        // //creating map
        // unordered_map<Node*,Node*>oldToNew;
        // temp=head;
        // Node* temp2=cloneHead;
        // while(temp!=NULL){
        //     oldToNew[temp]=temp2;
        //     temp=temp->next;
        //     temp2=temp2->next;
            
        // }
        
        // temp=head;
        // temp2=cloneHead;
        // while(temp!=NULL){
        //     temp2->arb=oldToNew[temp->arb];
        //     temp=temp->next;
        //     temp2=temp2->next;
        // }
        
        // return cloneHead;
    }

};