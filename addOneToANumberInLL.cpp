/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
 void insertAtTail(Node* &tail){
     Node* node=new Node(1);
     tail->next=node;
     tail=node;
 }
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* current=head;
    Node* prev=NULL;
    Node* forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;
}
Node *addOne(Node *head)
{
    if(head==NULL){
        Node* ans=new Node(1);
        return ans;
    }
    Node* newHead=reverse(head);
    Node* temp=newHead;
    Node* prev=NULL;
    while(temp!=NULL && temp->data==9){
        prev=temp;
        temp->data=0;
        temp=temp->next;
    }
    if(temp!=NULL){
        temp->data=temp->data+1;
    }
    else{
        insertAtTail(prev);
    }
    Node* ans=reverse(newHead);
    return ans;

}
