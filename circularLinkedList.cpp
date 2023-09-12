#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"destructor called"<<endl;
    }
};
void insert(Node* &tail, int element, int d){
    //empty list
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        tail->next=temp;
    }
    else{
        //non empty list
        Node* current=tail;
        while(current->data!=element){
            current=current->next;
        }
        //current is representing the element now
        Node* temp=new Node(d);
        temp->next=current->next;
        current->next=temp;
    }
}
void deleteNode(Node* &tail, int value){
    //when list is empty
    if(tail==NULL){
        cout<<"Nothing to delete, list is already empty "<<endl;
        return;
    }
    //when single node
    if(tail->next==tail){
        Node* temp=tail;
        tail=NULL;
        delete temp;
        return;
    }
    //multiple nodes
    Node* prev=tail;          //IMPORTANT
    Node* current=prev->next; //IMPORTANT
    while(current->data!=value){
        prev=current;
        current=current->next;
    }
    prev->next=current->next;
    if(current==tail){
        tail=prev;
    }
    current->next=NULL;
    delete current;
}
void print(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
    Node *tail=NULL;
    // Node* node1=new Node(5);
    // Node* tail=node1;
    insert(tail,5,1);
    insert(tail,1,2);
    insert(tail,2,3);
    insert(tail,1,4);
    insert(tail,2,5);
    print(tail);
    deleteNode(tail,2);
    print(tail);
}