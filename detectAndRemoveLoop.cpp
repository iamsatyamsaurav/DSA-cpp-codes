
//APPROACH 1 ---using map
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

//APPROACH 2----floyd loop detection algo
// bool floydDetect(Node* &head){
//     if(head==NULL){
//         return false;
//     }
//     Node *slow=head;
//     Node *fast=head;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//         if(fast==slow){
//             cout<<"Node in the loop is "<<slow->data<<endl;
//             return true;
//         }
//     }
//     return false;
// }

//floyd loop detection algo and find start node of the loop
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

//REMOVE LOOP
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