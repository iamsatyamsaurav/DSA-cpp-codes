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
int findLen(Node* head){
    if(head==NULL){
        return 0;
    }
    if(head->next==NULL){
        return 1;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* removeKthNode(Node* head, int K)
{
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL && K==1){
        return NULL;
    }
    if(K==findLen(head)){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        return head;
    }
    int length=findLen(head);
    int n=length-K;
    int count=1;
    Node* temp=head;
    while(count<n){
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;
    return head;
}
