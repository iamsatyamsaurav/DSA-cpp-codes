class Solution
{
    public:
    struct Node* reverse(struct Node* &head){
        Node* current=head;
        Node* prev=NULL;
        Node* forward=NULL;
        
        while(current!=NULL){
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        return prev;
    }
    void insertAtTail(Node* &tail,Node* &head,int data){
        if(head==NULL){
            Node* temp=new Node(data);
            tail=temp;
            head=temp;
        }
        else{
            Node* temp=new Node(data);
            tail->next=temp;
            tail=temp;
        }
        
    }
    struct Node* add(struct Node* &head1, struct Node* &head2){
        int carry=0;
        int sum=0;
        int digit=0;
        
        Node* ansHead=NULL;
        Node* ansTail=NULL;
        while(head1!=NULL && head2!=NULL){
            sum=carry+head1->data+head2->data;
            digit=sum%10;
            insertAtTail(ansTail,ansHead,digit);
            carry=sum/10;
            head1=head1->next;
            head2=head2->next;
        }
        while(head1!=NULL){
            sum=carry+head1->data;
            digit=sum%10;
            insertAtTail(ansTail,ansHead,digit);
            carry=sum/10;
            head1=head1->next;
        }
        while(head2!=NULL){
            sum=carry+head2->data;
            digit=sum%10;
            insertAtTail(ansTail,ansHead,digit);
            carry=sum/10;
            head2=head2->next;
        }
        while(carry!=0){
            sum=carry;
            digit=sum%10;
            insertAtTail(ansTail,ansHead,digit);
            carry=sum/10;
        }
        return ansHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //reverse the two linked list
        first=reverse(first);
        second=reverse(second);
        
        //adding the reversed linked list
        Node* ans=add(first,second);
        
        //reverse the result to get the correct result
        ans=reverse(ans);
        
        //return answer
        return ans;
        
    }
};
