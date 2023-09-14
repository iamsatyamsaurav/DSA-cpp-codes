/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydDetect(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            //cout<<"Node in the loop is "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* findStartNode(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* fast=floydDetect(head);
    if(fast==NULL){
        return NULL; //no loop
    }
    Node* slow=head;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
    }
    //now fast and slow are equal and are denoting the start node of the loop
    return slow;
}
Node *removeLoop(Node *head)
{
    if(head==NULL){
        return NULL ;
    }
    Node* startNode=findStartNode(head);
    if(startNode==NULL){
        return head;   //no loop
    }
    Node* temp=startNode;
    while(temp->next!=startNode){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}