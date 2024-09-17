#include<iostream>
#include<map>
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
bool detectLoop(Node* &head){
    if(head==NULL){
        return false;
    }
    Node* temp=head;
    map<Node*,bool>visited;
    while(temp!=NULL){
        if(visited[temp]==true){
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
Node* findStartNode(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* fast=floydDetect(head);
    Node* slow=head;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
    }
    //now fast and slow are equal and are denoting the start node of the loop
    return slow;
}
void removeLoop(Node* &head){
    if(head==NULL){
        return ;
    }
    Node* startNode=findStartNode(head);
    Node* temp=startNode;
    while(temp->next!=startNode){
        temp=temp->next;
    }
    temp->next=NULL;
    return;
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
    // deleteNode(tail,2);
    // print(tail);
    if(isCircular(tail)){
        cout<<"Circular"<<endl;

    }
    else{
        cout<<"Not circular"<<endl;
    }
    // if(floydDetect(tail)){
    //     cout<<"loop is present"<<endl;
    // }
    // else{
    //     cout<<"Loop is not present"<<endl;
    // }
    if(floydDetect(tail)){
        cout<<"Loop is present "<<floydDetect(tail)->data<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    cout<<"the start node of the loop is "<<findStartNode(tail)->data<<endl;
    removeLoop(tail);
    if(floydDetect(tail)){
        cout<<"Loop is present "<<floydDetect(tail)->data<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    //cout<<"the start node of the loop is "<<findStartNode(tail)->data<<endl;
    print(tail);
}