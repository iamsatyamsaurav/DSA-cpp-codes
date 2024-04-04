/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void insertAtTail(Node* &tail,Node* &temp){
    tail->next=temp;
    tail=temp;
}
Node* sortList(Node *head){

    //Without data replacement:

    //creating dummy nodes
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* temp=head;

    //traversing and adding the nodes in the respective linked list (0,1 and 2)
    while(temp!=NULL){
        if(temp->data==0){
            insertAtTail(zeroTail,temp);
        }
        else if(temp->data==1){
            insertAtTail(oneTail,temp);
        }
        else if(temp->data==2){
            insertAtTail(twoTail,temp);
        }
        temp=temp->next;
    }

    //merging all the three linked list
    if(zeroHead->next==NULL){  //no zero node present in the list
        oneTail->next=twoHead->next;
        twoTail->next=NULL;
        head=oneHead->next;
        
    }
    else if(oneHead->next==NULL){  //no one node
        zeroTail->next=twoHead->next;
        twoTail->next=NULL;
        head=zeroHead->next;
        
    }
    else if(twoHead->next==NULL){  //no two  node
        zeroTail->next=oneHead->next;
        oneTail->next==NULL;
        head=zeroHead->next;
    }
    else{     //all the three nodes are present
        zeroTail->next=oneHead->next;
        oneTail->next=twoHead->next;
        twoTail->next=NULL;
        head=zeroHead->next;
    }

   //deleting the dummy nodes 
    zeroHead->next=NULL;
    oneHead->next=NULL;
    twoHead->next-NULL;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    //returning the head of merged list
    return head;












    //By data replacement:

    // int countZero=0;
    // int countOne=0;
    // int countTwo=0;
    // Node* temp=head;
    // while(temp!=NULL){
    //     if(temp->data==0){
    //         countZero++;
    //     }
    //     else if(temp->data==1){
    //         countOne++;
    //     }
    //     else if(temp->data==2){
    //         countTwo++;
    //     }
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     if(countZero!=0){
    //         temp->data=0;
    //         countZero--;
    //     }
    //     else if(countOne!=0){
    //         temp->data=1;
    //         countOne--;
    //     }
    //     else if(countTwo!=0){
    //         temp->data=2;
    //         countTwo--;
    //     }
    //     temp=temp->next;

    // }
    // return head;
}