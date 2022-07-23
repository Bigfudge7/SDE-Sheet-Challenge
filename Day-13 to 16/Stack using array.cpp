// Stack class.
class Stack {
    int size;
    int *arr;
    int top1;
    
public:
    
    Stack(int capacity) {
        size=1000;
        top1=-1;
        arr=new int[size];
    }

    void push(int num) {
        top1++;
        if(top1<size) arr[top1]=num;
    }

    int pop() {
        if(top1==-1) return -1;
        int store=arr[top1];
        top1--;
        return store;
    }
    
    int top() {
        if(top1==-1) return -1;
        return arr[top1];
    }
    
    int isEmpty() {
        if(top1==-1) return 1;
        return 0;
    }
    
    int isFull() {
        if(top1==size) return 1;
        return 0;
    }
    
};