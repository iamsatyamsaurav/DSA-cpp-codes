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

//APPROACH 1
// int getLen(Node* &head){
//     Node* temp=head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }

//APPROACH 2
Node* getMid(Node* &head){
    //0 or 1 node
    if(head==NULL||head->next==NULL){
        return head;
    }
    else{
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
}
Node *findMiddle(Node *head) {
    return getMid(head);

//     int len=getLen(head);
//     int mid=(len/2)+1;
//     Node* temp=head;
//     int cnt=1;
//     while(cnt<mid){
//         temp=temp->next;
//         cnt++;
//     }
//     return temp;
}

