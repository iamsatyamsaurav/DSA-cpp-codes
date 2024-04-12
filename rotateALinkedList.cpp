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
pair<int,Node*> findLenAndTail(Node* head){
     Node* temp=head;
     int count=1;
     while(temp->next!=NULL){
          temp=temp->next;
          count++;
     }
     pair<int ,Node* >p;
     p.first=count;
     p.second=temp;
     return p;
}
Node *rotate(Node *head, int k) {
     if(head==NULL || head->next==NULL){
          return head;
     }
     pair<int,Node*>p=findLenAndTail(head);
     Node* tail=p.second;
    int n=p.first;
    int steps;
    if(n>k){
         steps=n-k;
    }
    else{
         k=k%n;
         steps=n-k;
    }
   
   
     int count=1;
     Node* temp=head;
     while(count<steps){
          temp=temp->next;
          count++;
     }
     tail->next=head;
     head=temp->next;
     temp->next=NULL;
     return head;
}