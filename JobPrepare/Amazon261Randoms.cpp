/*#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
public:
    Node(){
        next=NULL;
        data=-1;
    }
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
public:
    int top,s;
    Node **arr;
public:
    Stack(){
        top=-1;s=10;
        arr=new Node*[s];
    }
    Stack(int s){
        this->s=s;
        top=-1;
        arr=new Node*[s];
    }
    void push(Node *data){
        if(!isFull()){
            arr[++top]=data;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    Node* peek(){
        return arr[top];
    }
    Node* pop(){
        if(!isEmpty()){
            return arr[top--];
        }else{
            return NULL;
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
};

void printLinkedList(Node *head){
    while(head->next!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<head->data<<endl;
}

//1) Given a linked list eg : 1->2->3->4->5->6, make the following changes
//1->6->2->5->3->4
void Reverse1625(Node *head){
    Node *t1=head,*t2=head;
    int count=0;
    while(t2!=NULL && t2->next!=NULL){
        t2=t2->next->next;
        count+=2;
        t1=t1->next;
    }
    Stack s(count);
    printLinkedList(t1);
    while(t1!=NULL){
        s.push(t1);
        t1=t1->next;
    }
    t1=head;t2=NULL;
    while(!s.isEmpty()){
        t2=s.pop();
        if(t1==t2){
            t1->next=NULL;
            break;
        }
        Node *t3=t1->next;
        t1->next=t2;
        if(t2!=t3){
            t2->next=t3;
        }else{
            t2->next=NULL;
        }
        t1=t3;
    }
    printLinkedList(head);
}

int main()
{
    Node *head=new Node(1);
    Node *t=head;
    // do for n even & odd
    int n=11;
    for(int i=2;i<=n;i++){
        Node *t1=new Node(i);
        t->next=t1;
        t=t1;
    }
    Reverse1625(head);
    return 0;
}
*/
