#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;
public:
    Node(){
        data=-1;
        left=right=NULL;
    }
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
class Stack{
public:
    int top,s;
    Node *arr;
public:
    Stack(){
        s=10;top=-1;arr=new Node[s];
    }
    Stack(int siz){
        s=siz;top=-1;arr=new Node[s];
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
    void push(Node data){
        if(!isFull()){
            arr[++top]=data;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    Node* pop(){
        if(!isEmpty()){
            Node temp=arr[top--];
            return &temp;
        }else{
            return NULL;
        }
    }
    Node* peek(){
        if(!isEmpty()){
            Node temp=arr[top];
            return &temp;
        }else{
            return NULL;
        }
    }
};

void preOrderRecursive(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrderRecursive(root->left);
        preOrderRecursive(root->right);
    }
}
void inOrderRecursive(Node *root){
    if(root!=NULL){
        inOrderRecursive(root->left);
        cout<<root->data<<" ";
        inOrderRecursive(root->right);
    }
}
void postOrderRecursive(Node *root){
    if(root!=NULL){
        postOrderRecursive(root->left);
        postOrderRecursive(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    Node *tree=new Node[8];
    for(int i=1;i<=7;i++){
        tree[i].data=i;
    }
    for(int i=1;i<4;i++){
        tree[i].left=&tree[i*2];
        tree[i].right=&tree[i*2+1];
    }
    //cout<<"PreOrder Traversal: ";
    //preOrderRecursive(&tree[1]);cout<<endl<<"Inorder Traversal: ";
    //inOrderRecursive(&tree[1]);cout<<endl<<"PostOrder Traversal: ";
    //postOrderRecursive(&tree[1]);cout<<endl;


}

