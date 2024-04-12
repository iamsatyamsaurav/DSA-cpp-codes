/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
int getLen(Node *&head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
Node* kReverse(Node* head, int k) {
    //base case
    if(head==NULL){
        return NULL;
    }
    //solving one case-->reverse first k nodes
    Node* current=head;
    Node* prev=NULL;
    Node* forward=NULL;
    int count=0;
    while(current!=NULL && count<k ){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
        count++;
    }
    //solving remaining part through recursion
    if(forward!=NULL ){
        if(getLen(forward)>=k)
        head->next=kReverse(forward,k);
        else{
            head->next=forward;
        }
    }
    return prev;
}