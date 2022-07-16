void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    
    LinkedListNode<int> *curr=node;
    curr->data =curr->next->data;
    curr->next=curr->next->next;
    
}