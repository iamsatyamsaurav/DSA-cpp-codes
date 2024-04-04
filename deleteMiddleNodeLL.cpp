/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* deleteMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head->next;
    Node* prev=NULL;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        prev=slow;
        slow=slow->next;
        
    }
    prev->next=slow->next;
    return head;
}
