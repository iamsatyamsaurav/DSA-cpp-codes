/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            if(temp->prev!=NULL){
                temp->prev->next=temp->next;
                if(temp->next){
                    temp->next->prev=temp->prev;
                }
                temp=temp->next;
            }
            else{
                head=head->next;
                 temp=head;
                 if (head)
                    head->prev = NULL;
               
            }

        }
        else{
            temp=temp->next;
        }
        
    }
    return head;
}
