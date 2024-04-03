/****************************************************************

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


*****************************************************************/
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