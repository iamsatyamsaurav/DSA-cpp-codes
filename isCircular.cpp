bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;
    // while(temp!=head){
    //     temp=temp->next;
    //     if(temp==NULL){
    //         return false;
    //     }
    // }
    // return true;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    else{
        return true;
    }
}