Node * removeDuplicates(Node *head)
{   if(head==NULL || head->next==NULL){
        return head;
    }   
    Node* current=head;
    while(current!=NULL){
        if((current->next!=NULL)&&(current->data==current->next->data)){
            Node* duplicate=current->next;
            current->next=current->next->next;
            delete duplicate;
        }
        else{
            current=current->next;

        }
    }
    return head;
}