Node *rotate(Node *head, int k) {
     if(head==NULL || head->next==NULL || k==0){
         return head;
     }
    Node *curr=head;
    int c=1;
    while(curr->next!=NULL){
        c++;
        curr=curr->next;
    }
   // cout<<c<<endl;
    curr->next=head;
    //curr=head;
    k=k%c;
    k=c-k;
    //if(c==k) return head;
    while(k--){
        curr=curr->next;
    }
    head=curr->next;
    curr->next=NULL;
    return head;
}