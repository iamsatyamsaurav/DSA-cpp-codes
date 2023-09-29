/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
node* findMid(node* &head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* merge(node* &left, node* &right){
    if(left==NULL)
    return right;
    if(right==NULL)
    return left;
    node* leftpointer=left;
    node* rightpointer=right;
    node* newNode=new node(-1);
    node* temp= newNode;
    while(leftpointer!=NULL && rightpointer!=NULL){
        if(leftpointer->data<=rightpointer->data){
            temp->next=leftpointer;
            temp=leftpointer;
            leftpointer=leftpointer->next;

        }
        else{
            temp->next=rightpointer;
            temp=rightpointer;
            rightpointer=rightpointer->next;
        }
    }
    while(leftpointer!=NULL){
            temp->next=leftpointer;
            temp=leftpointer;
            leftpointer=leftpointer->next;

    }
    while(rightpointer!=NULL){
            temp->next=rightpointer;
            temp=rightpointer;
            rightpointer=rightpointer->next;
    }

    newNode=newNode->next;
    return newNode;
}
node* mergeSort(node *head) {
    //base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    //dividing the list into two parts
    node* mid=findMid(head);
    node* left=head;
    node* right=mid->next;
    mid->next=NULL;
    //sorting both the parts
    left=mergeSort(left);
    right=mergeSort(right);
    //merging the two sorted lists
    node* ans=merge(left,right);
    return ans;

}
