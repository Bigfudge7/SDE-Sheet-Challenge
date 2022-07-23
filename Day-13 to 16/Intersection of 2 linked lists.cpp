#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead->next==NULL) return firstHead->data;
    if(secondHead->next==NULL) return secondHead->data;
    int l1=0,l2=0;
    Node* curr1=firstHead;
    Node* curr2=secondHead;
    
    while(curr1!=NULL){
        l1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL){
        l2++;
        curr2=curr2->next;
    }
    curr1=firstHead;
    curr2=secondHead;
    if(l2>l1){
        int l=l2-l1;
        while(l--){
            curr2=curr2->next;
        }
    }
    else{
        int l=l1-l2;
        while(l--){
            curr1=curr1->next;
        }
    }
    while(curr1->next!=curr2->next){
        curr1=curr1->next;
        curr2=curr2->next;
        if(curr1->next==NULL ||curr2->next==NULL) return -1;
    }
    return curr1->next->data;
}