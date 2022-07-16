LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    
    if(head==NULL || head->next==NULL) return head;
    
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}