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

int main(){
    Node n[10];
    //n=new Node[10];
    for(int i=0;i<9;i++){
        n[i].data=i+1;
        n[i].next=&n[i+1];
    }
    n[9].data=10;
    n[9].next=NULL;
    Node *nn=&n[0];
    for(int i=0;i<10;i++){
        cout<<i+1<<" Element: data= "<<nn->data<<endl;
        nn=nn->next;
    }

    return 0;
}
*/
