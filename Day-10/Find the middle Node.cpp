Node *findMiddle(Node *head) {
    if(head==NULL || head->next==NULL) return head;
    Node *fast=head->next;
    Node *slow=head;
    int count=1;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
        count++;
    }
   // cout<<count<<endl;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //return slow;
    if(count%2==1) return slow;
    else{ return slow->next;}
}