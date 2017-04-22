/*#include <iostream>

using namespace std;
struct Node{
    Node *next;
    int d;
};

Node* Insert(Node *head,int data);

int main()
{
    Node a,b,c;
    a.d=10;b.d=20;c.d=30;
    a.next=&b;
    b.next=&c;
    c.next=NULL;

    Node *x;//=&a;
    x=Insert(&a,40);
    cout<<"hello"<<endl;
    while(x!=NULL){
        cout<<x->d<<endl;
        x=x->next;
    }
    cout<<endl;
    system("pause");
    return 0;
}



Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head==NULL)
        return head;

    Node *a,*b;
    a=head;
    b=head->next;
    while(b!=NULL){
        a=a->next;
        b=a->next;
    }
    Node *t=NULL;
    t->d=data;
    t->next=NULL;
    a->next=t;
    return head;
}
*/
