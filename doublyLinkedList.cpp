#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void getlen(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"length: "<<count<<endl;
}
void insertAtHead(int d, Node* &head){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertAtTail(int d, Node* &tail){
    Node * temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
insertAtPosition(int d,int pos, Node *&head, Node* &tail){
    if(pos==1){
        insertAtHead(d,head);
        return 0;
    }
    int count=1;
    Node* temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(d,tail);
        return 0;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deleteNode(int pos,Node* &head, Node* &tail){
    //deleting first node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        Node* current=head;
        Node* prevNode=NULL;
        int count=1;
        while(count<pos){
            prevNode=current;
            current=current->next;
            count++;
        }
        //deleting last node
        if(current->next==NULL){
            prevNode->next=NULL;
            current->prev=NULL;
            tail=prevNode;
            delete current;
            return;
        }
        //deleting any middle node
        prevNode->next=current->next;
        current->next->prev=prevNode;
        current->next=NULL;
        current->prev=NULL;
        delete current;

    }
}
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;
//     while(temp!=head){
//         temp=temp->next;
//         if(temp==NULL){
//             return false;
//         }
//     }
//     return true;
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
int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(12,head);
    insertAtTail(14,tail);
    insertAtPosition(11,1,head,tail);
    insertAtPosition(20,5,head,tail);
    insertAtPosition(22,3,head,tail);
    print(head);
    getlen(head);
    cout<<"head="<<head->data<<endl;
    cout<<"tail="<<tail->data<<endl;
    deleteNode(3,head,tail);
    print(head);
    getlen(head);
    cout<<"head="<<head->data<<endl;
    cout<<"tail="<<tail->data<<endl;
    if(isCircular(head)){
        cout<<"Circular"<<endl;

    }
    else{
        cout<<"Not circular"<<endl;
    }
}