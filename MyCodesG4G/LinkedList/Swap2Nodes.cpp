/*#include<iostream>
#include<stdio.h>

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
bool exchange(Node *x,Node *y,Node *head){
    Node *temp=head,*x0=NULL,*x1=NULL,*x2=NULL,*y0=NULL,*y1=NULL;
    while(temp!=NULL){
        if(temp->next==x){
            x0=temp;
            x1=temp->next;
            x2=temp->next->next;
        }else if(temp->next==y){
            y0=temp;
            y1=temp->next;
        }
        temp=temp->next;
    }
    if(x0==NULL || y0==NULL)return false;
    else{
        x0->next=y1;
        x1->next=y1->next;
        y1->next=x2;
        y0->next=x1;
        return true;
    }

}

int main(){
    Node head(1);
    Node a(2);
    Node x(10);
    Node y(20);
    Node b(3);
    head.next=&x;
    x.next=&a;
    a.next=&y;
    y.next=&b;
    b.next=NULL;

    Node *temp=&head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    exchange(&x,&y,&head);
    temp=&head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

    return 0;
}
*/
