/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* &left, Node* &right){
	Node* newNode=new Node(-1);
	Node* temp=newNode;
	while(left!=NULL && right!=NULL){
		if(left->data<=right->data){
			temp->child=left;
			temp=temp->child;
			left=left->child;
		}
		else{
			temp->child=right;
			temp=temp->child;
			right=right->child;
		}
	}
	if(left){
		temp->child=left;
	}
	else{
		temp->child=right;
	}

	newNode=newNode->child;
	newNode->next=NULL;
	return newNode;
}
Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* left=head;
	Node* right=head->next;
	left->next=NULL;
	right=flattenLinkedList(right);
	Node* ans=merge(left,right);
	return ans;

}
