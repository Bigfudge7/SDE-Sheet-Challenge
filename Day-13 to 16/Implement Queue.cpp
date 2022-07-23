class Node{
 public:
   int data;
   Node* next;
   Node(int data){
       this->data=data;
       this->next=NULL;
   }
};
class Queue {
public:
    Node *head,*tail;
    Queue() {
        head = NULL;
        tail = NULL;}

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return (head==NULL&&tail==NULL);
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        Node*newNode=new Node(data);
        if(head==NULL) {
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head==NULL) return -1;
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        int x=temp->data;
        delete(temp);
        return x;
    }

    int front() {
        // Implement the front() function
        if(head==NULL) return -1;
        return head->data;
    }
    
};