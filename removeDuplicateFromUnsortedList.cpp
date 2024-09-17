#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }   
};
void insertAtHead(int d,Node *&head, Node *&tail){  //because we have to make change in actual head ,not any copy
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node *temp=new Node(d);
        temp->next=head;
        head=temp;
    }
}
void insertAtTail(int d,Node *&tail, Node *&head){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node *temp=new Node(d);
        tail->next=temp;
        tail=tail->next;
    }
}
void insertAtPosition(int d,int pos,Node* &head, Node* &tail){
    //inserting at first position
    if(pos==1){
        insertAtHead(d,head,tail);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(d,tail,head);
        return;
    }
    //creating new node
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}
void deleteNodeAtPos(int position,Node* &head,Node* &tail){
    //handling deletion of first element
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //deletion of any middle node or the last node
    else{
        Node *current= head;
        Node *prev=NULL;
        int count=1;
        while(count<position){
            prev=current;
            current=current->next;
            count++;
        }
        if(current->next==NULL){   //handling tail in case of deleting the last node
            tail=prev;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}
void print(Node *&head){
    Node *temp=head; //since head should always point to the first node
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;  
}
bool detectLoop(Node* &head){
    if(head==NULL){
        return false;
    }
    Node* temp=head;
    map<Node*,bool>visited;
    while(temp!=NULL){
        if(visited[temp]==true){\
            cout<<"Loop is present at value: "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
    
}
Node* floydDetect(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            //cout<<"Node in the loop is "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node *removeDuplicates(Node *head){

  if(head==NULL || head->next==NULL){
        return head;      
    }
    Node* current=head;
    Node* prev=NULL;
    while(current!=NULL){
        Node* temp=current->next;
        while(temp!=NULL){
            if(current->data!=temp->data){
                prev=temp;
                temp=temp->next;
            }
            else{
                Node *nodeToDelete=temp;
                prev->next=temp->next;
                temp=temp->next;
                nodeToDelete->next=NULL;
                delete nodeToDelete;
            }
        }
        current=current->next;
    
    }
    return head;
}
int main(){
    //no initial node
    Node* head = NULL;
    Node* tail = NULL;

    //when there is a node
    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;
    insertAtHead(3,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(4,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(2,head,tail);
    // insertAtTail(12,tail,head);
    // insertAtTail(15,tail,head);
    // insertAtPosition(16,3,head,tail);
    // insertAtPosition(20,1,head,tail);
    // insertAtPosition(7,6,head,tail);
    // insertAtPosition(11,7,head,tail);
    // print(head);
    // deleteNodeAtPos(7,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    Node* newHead=removeDuplicates(head);
    print(newHead);
    // if(floydDetect(tail)){
    //     cout<<"Loop is present "<<floydDetect(tail)->data<<endl;
    // }
    // else{
    //     cout<<"Loop is not present"<<endl;
    // }
}