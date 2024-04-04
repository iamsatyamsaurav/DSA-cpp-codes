#include<unordered_map>
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
Node* sol(Node* head1,Node* head2,int d){
    while(d){
        d--;
        head2=head2->next;
    }
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        if(temp1==temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}
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
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL || secondHead==NULL){
        return NULL;
    }
    int l1=findLen(firstHead);
    int l2=findLen(secondHead);
    Node* ans=NULL;
    if(l1<l2){
        ans=sol(firstHead,secondHead,(l2-l1));
    }
    else{
        ans=sol(secondHead,firstHead,(l1-l2));
    }
    return ans;




    // if(firstHead==NULL || secondHead==NULL){
    //     return NULL;
    // }
    // unordered_map<Node*,int>mp;
    // Node* temp=firstHead;
    // while(temp!=NULL){
    //     mp[temp]=1;
    //     temp=temp->next;

    // }
    // temp=secondHead;
    // while(temp!=NULL){
    //     if(mp.find(temp)!=mp.end()){
    //         //found;
    //         return temp;
    //     }
    //     temp=temp->next;
    // }
    // return NULL;

}
