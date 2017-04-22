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
class Stack{
public:
    int top,s;
    Node **arr;
public:
    Stack(){
        s=10;top=-1;arr=new Node*[s];
    }
    Stack(int siz){
        s=siz;top=-1;arr=new Node*[s];
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==s-1;
    }
    void push(Node *node){
        if(!isFull()){
            arr[++top]=node;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    Node* pop(){
        if(!isEmpty()){
            Node *temp=arr[top--];
            return temp;
        }else{
            return NULL;
        }
    }
    Node* peek(){
        if(!isEmpty()){
            Node *temp=arr[top];
            return temp;
        }else{
            return NULL;
        }
    }
};

int TotalNodes(Node *root){
    if(!root)return 0;
    int left=TotalNodes(root->left),right=TotalNodes(root->right);
    return left+right+1;
}
int countLeafNodes(Node *root){
    if(!root)return 0;
    if(!root->left && !root->right)return 1;
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}

void printPath(int *path,int len){
    for(int i=0;i<len;i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void PrintRootToLeafRecursive(Node *root,int *path,int len){
    if(root==NULL)return;
    path[len++]=root->data;
    if(root->left==NULL && root->right==NULL){
        printPath(path,len);
        return;
    }
    PrintRootToLeafRecursive(root->left,path,len);
    PrintRootToLeafRecursive(root->right,path,len);
}

bool isBalancedTree(Node *root,int *h){
    if(!root){
        *h=0;return true;
    }
    int lh=0,rh=0;
    bool l=isBalancedTree(root->left,&lh),r=isBalancedTree(root->right,&rh);
    *h=1+max(lh,rh);
    if(lh-rh>=2 || rh-lh>=2)return false;
    else return l && r;
}

int main(){
    Node *tree=new Node[8];
    for(int i=0;i<=7;i++){
        tree[i].data=i;
    }
    for(int i=1;i<4;i++){
        tree[i].left=&tree[i*2];
        tree[i].right=&tree[i*2+1];
    }
    tree[0].data=8;
    tree[7].left=&tree[0];

    int *path=new int[TotalNodes(&tree[1])];
    PrintRootToLeafRecursive(&tree[1],path,0);
    cout<<"Total Leaf Nodes= "<<countLeafNodes(&tree[1])<<endl;
    int ans=0;cout<<"Is Tree Balanced? "<<isBalancedTree(&tree[1],&ans)<<endl;

    return 0;
}
*/
