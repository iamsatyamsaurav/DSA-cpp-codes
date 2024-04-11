/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int, int>> v;
   pair<int,int>p;
    Node* left=head;
    Node* right=head;
    while(right->next!=NULL){
        right=right->next;
    }
    while(left->data<right->data){
        int sum=left->data+right->data;
        if(sum>k){
            right=right->prev;
        }
        else if(sum<k){
            left=left->next;
        }
        else{
            p.first=left->data;
            p.second=right->data;
            v.push_back(p);
            left=left->next;
            right=right->prev;
        }
    }
    return v;

    //brute force
//    Node* temp=head;
//    vector<pair<int, int>> v;
//    pair<int,int>p;
//    while(temp->next!=NULL){
//        Node* current=temp->next;
//        while(current!=NULL){
//            if((temp->data+current->data)==k){
//                p.first=temp->data;
//                p.second=current->data;
//                v.push_back(p);
//            }
//            current=current->next;
//        }
//        temp=temp->next;
//    }
//    return v;
}
