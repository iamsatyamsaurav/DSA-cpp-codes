#include<vector>
class Solution{
  public:
    Node* findMid(Node* &head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node* reverse(Node* &head){
        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //APPROACH 2
        Node* mid=findMid(head);
        Node* temp=reverse(mid->next);
        mid->next=temp;
        //comparing the two parts
        Node* head1=head;
        Node* head2=mid->next;
        while(head2!=NULL){
            if(head1->data==head2->data){
                head1=head1->next;
                head2=head2->next;
            }
            else{
                return false;
            }
        }
        temp=reverse(mid->next);
        mid->next=temp;
        return true;
        
        //APPROACH 1
        
        // Node* temp=head;
        // vector<int> arr;
        // while(temp!=NULL){
        //     arr.push_back(temp->data);
        //     temp=temp->next;
        // }
        // int len=arr.size();
        // int s=0,e=len-1;
        // while(s<=e){
        //     if(arr[s]==arr[e]){
        //         s++;
        //         e--;
        //     }
        //     else{
        //         return false;
        //     }
            
        // }
        // return true;
    }
};