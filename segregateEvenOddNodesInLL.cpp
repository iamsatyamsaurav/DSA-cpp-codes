/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
bool isEven(Node* head){
    int val=head->data;
    if(val%2==0){
        return true;
    }
    else{
        return false;
    }
}
Node* segregateEvenOdd(Node* head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp=head;
    Node* even=NULL;
    Node* evenStart=NULL;
    Node* odd=NULL;
    Node* oddStart=NULL;
    while(temp!=NULL){
        if(isEven(temp)){
            if(even==NULL){
                evenStart=temp;
                even=temp;
            }
            else{
                even->next=temp;
                even=even->next;
            }
        }
        else{
            if(odd==NULL){
                oddStart=temp;
                odd=temp;
            }
            else{
                odd->next=temp;
                odd=odd->next;
            }
        }
        temp=temp->next;
    }
    if(even) even->next = oddStart;
    if(odd) odd->next = NULL;
  
    head=evenStart;
    return head;
}
