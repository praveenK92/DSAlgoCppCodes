/*#include <iostream>
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

void add(Node *head,int d){
    if(head->data>d){
        while(head->left!=NULL && head->data>d){
            head=head->left;
        }
        if(head->data>d){
            Node *t1=new Node(d);
            head->left=t1;
        }else{
            if(head->right!=NULL)add(head->right,d);
            else head->right=new Node(d);
        }
    }else{
        while(head->right!=NULL && head->data<d){
            head=head->right;
        }
        if(head->data<d){
            Node *t1=new Node(d);
            head->right=t1;
        }else{
            if(head->left!=NULL)add(head->left,d);
            else head->left=new Node(d);
        }
    }
}
void preOrderRecursive(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrderRecursive(root->left);
        preOrderRecursive(root->right);
    }
}
Node* makeBST(int *arr,int n){
    Node *head=new Node(arr[0]);
    for(int i=1;i<n;i++){
        add(head,arr[i]);
    }
    return head;
}

int main(){
    //int arr[]={10,5,1,7,40,50},n=6;
    int arr[]={10,5,1,7,40,20,50},n=7;
    Node *head=makeBST(arr,n);
    preOrderRecursive(head);
    return 0;
}
*/
