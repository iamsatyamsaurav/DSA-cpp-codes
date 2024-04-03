/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
Node* detectCycle(Node *head)
{
	if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return fast;
        }
    }
    return NULL;
}
Node *firstNode(Node *head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    if(detectCycle(head)==NULL){
        return NULL;
    }
    Node* fast=detectCycle(head);
    Node* slow=head;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
int lengthOfLoop(Node *head) {
    if(head==NULL || head->next==NULL || detectCycle(head)==NULL){
        return 0;
    }
    int count=1;
    Node* startNode=firstNode(head);
    Node* temp=startNode;
    while(temp->next!=startNode){
        count++;
        temp=temp->next;
    }
    return count;
}
