#include<stack>
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    if(head==NULL || head->next==NULL){
        return head;
    }

    //BY CHANGING LINKS--->1 TRAVERSAL

    Node* current=head;
    Node* left=NULL;
    while(current!=NULL){
        left=current->prev;
        current->prev=current->next;
        current->next=left;
        current=current->prev;
    }
    return left->prev;



    //using STACK --->2 TRAVERSALS
    // stack<int>s;
    // Node* temp=head;
    // while(temp!=NULL){
    //     s.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     temp->data=s.top();
    //     s.pop();
    //     temp=temp->next;
    // }
    // return head;
}

