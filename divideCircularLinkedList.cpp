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
int getLen(Node *&tail){
    Node* temp=tail->next;
    int count=1;
    while(temp!=tail){
        temp=temp->next;
        count++;
    }
    return count;
}
Node* findMidNode(Node* &tail,int len){
    Node* mid=tail;
    int count=0;
    if(len%2==0){
        count=len/2;
    }
    else{
        count=(len/2)+1;
    }
    for(int i=1;i<count;i++){
        mid=mid->next;
    }
    return mid;
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
void divide(Node* &tail,Node* &mid){
    Node* start1=tail;
    Node* start2=mid->next;
    Node* finder=tail;
    while(finder->next!=tail){
        finder=finder->next;
    }
    //making half half circular linked list
    mid->next=start1;
    finder->next=start2;
    print(start1);
    if(isCircular(start1)){
        cout<<"First part is circular"<<endl;
    }
    else{
        
        cout<<"First part is not circular"<<endl;
    }
    print(start2);
    if(isCircular(start2)){
        cout<<"Second part is circular"<<endl;
    }
    else{
        
        cout<<"Second part is not circular"<<endl;
    }
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
    insert(tail,1,2);
    print(tail);
    cout<<"mid node: "<<findMidNode(tail,getLen(tail))->data<<endl;;
    // cout<<tail->data<<endl;
    // cout<<"Length: "<<getLen(tail)<<endl;
    Node* midNode=(findMidNode(tail,getLen(tail)));
    divide(tail,midNode);
}