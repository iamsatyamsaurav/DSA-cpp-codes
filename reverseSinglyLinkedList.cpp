#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverse(LinkedListNode<int> *head) {
    //this function returns the head of the reversed list

    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int> *chhotaHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chhotaHead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    //Recursive approach
    return reverse(head);

    
    //Iterative approach:
    /*if(head==NULL||head->next==NULL){
        return head;
    }
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *current=head;
    LinkedListNode<int> *forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;*/
}